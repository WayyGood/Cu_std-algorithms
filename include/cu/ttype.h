#pragma once


//MARK:C dep
#include "stdio.h"
#include "stdlib.h"

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef  char s8;
typedef  short s16;
typedef  int s32;

typedef float f32;
typedef double f64;

#ifdef __WIN32

typedef unsigned __int64 u64;
typedef  __int64 s64;

#else

typedef unsigned long long u64;
typedef  long long s64;

#endif

typedef u64 b64;
typedef u32 b32;
typedef u16 b16;
typedef u8 b8;

#if __x86_64__ || _M_X64

typedef unsigned long long ptrsize;

#else

typedef unsigned int ptrsize;

#endif




//
#ifdef _WIN32

#define _deprecated __declspec(deprecated)
#define _restrict __restrict
#define _optnone
#define _ainline __forceinline
#define _align(alignment) __declspec( align(alignment) )
#define _membarrier() MemoryBarrier()
#define _winapi __stdcall
#define _dllexport __declspec(dllexport)
#define _packed

#else

#define _deprecated __attribute__ ((deprecated))
#define _restrict __restrict__
#define _optnone __attribute__((optimize("O0")))
#define _ainline inline __attribute__((always_inline))
#define _align(alignment) __attribute__ ((aligned (alignment)))
#define _membarrier() asm volatile ("" : : : "memory")
#define _winapi
#define _dllexport __attribute__ ((visibility ("default")))
#define _packed __attribute__((packed))

#endif


#define _cachealign _align(64)

#define _either(condition,value1,value2) ((condition) ? value1: value2)
#define _internal static
#define _persist static
#define _global static
#define _countsize(size,type) size/(sizeof(type))
#define _typebitcount(a) (sizeof(a) * 8)
#define _arraycount(ar) (sizeof(ar)/sizeof(ar[0]))
#define _in_
#define _out_
#define _optnl_

#define _writetop16(m64t,value) (m64t.u | (((u64)value) << 48))
#define _gettop16(m64t) (m64t.u >> 48)
#define _masktop16(m64t)  (m64t.u ^ 0xFFFF000000000000)
#define _zerotop16(m64t) (m64t.u ^= 0xFFFF000000000000)


//MARK:Does this even work??
#define _unsigned_max(value) (((u64)1 << (sizeof(value) * 8)) - 1)

#define _kilobytes(value) ((value) * 1024)
#define _megabytes(value) (_kilobytes(value) * 1024)
#define _gigabytes(value) (_megabytes((uint64_t)value) * 1024)
#define _terrabytes(value) (_gigabytes((uint64_t)value) * 1024)

#define _alignpow2(value,pow) ((value + (pow -1)) & (~(pow -1)))
#define _align4(value) _alignpow2(value,4)
#define _align8(value) _alignpow2(value,8)
#define _align16(value) _alignpow2(value,16)
#define _align32(value) _alignpow2(value,32)
#define _align64(value) _alignpow2(value,64)
#define _align128(value) _alignpow2(value,128)
#define _align256(value) _alignpow2(value,256)
#define _devicealign(value) _align256(value)
#define _mapalign(value) _align128(value)

//kind of like rounding down by power of 2
#define _dalignpow2(value,pow) ((value) & (~(pow -1)))
#define _dmapalign(value) _dalignpow2(value,128)


#define _encode_rgba(r,g,b,a) ((u8(r)) | ((u8(g)) << 8) | ((u8(b)) << 16) | ((u8(a)) << 24))
#define _encode_bgra(b,g,r,a) ((u8(b)) | ((u8(g)) << 8) | ((u8(r)) << 16) | ((u8(a)) << 24))
#define _removesignedbit(value) (value & 0x7FFFFFFF)
#define _addsignedbit(value) (value |  (1 << 31))

#ifdef DEBUG

#define _kill(string,condition) if((condition)) {printf("%s %s %d\n",__FUNCTION__,__FILE__,__LINE__);*(int *)0 = 0;}
#define _dprint(string, ...) printf(string, __VA_ARGS__);
#define _impl_PASTE(a,b) a##b
#define _impl_CASSERT_LINE(predicate, line, file) \
typedef char _impl_PASTE(assertion_failed_##file##_,line)[2*!!(predicate)-1];
#define _compile_kill(condition) _impl_CASSERT_LINE(!(condition),__LINE__,__FILE__)

#else

#define _kill(string,condition)
#define _compile_kill(condition)
#define _dprint(string, ...)

#endif

union m32{
    
    u32 u;
    s32 i;
    f32 f;
    
    operator u32(){
        
        return u;
    }
    
    operator s32(){
        
        return i;
    }
    
    operator f32(){
        
        return f;
    }
    
    void operator=(u32 o){
        u = o;
    }
    
    void operator=(f32 o){
        f= o;
    }
};

union m64{
    
    u64 u;
    s64 i;
    f64 f;
    
    
    union{
        
        void* ptr;
        
        struct{
            u32 pad1;
            u16 pad2;
            u16 top16_bits;
        };
    };
    
    
    m32 array[2];
    
    m32& operator [](ptrsize index){
        
        return array[index];
    }
    
    operator u64(){
        
        return u;
    }
    
    operator s64(){
        
        return i;
    }
    
    operator f64(){
        
        return f;
    }
    
    void operator=(u64 o){
        u= o;
    }
    
    void operator=(f64 o){
        f= o;
    }
};


void _ainline ClearPtrTop16Bits(void** ptr){
    
    m64 v ={};
    v.ptr = *ptr;
    
    v.u ^= 0xFFFF000000000000;
    
    *ptr = v.ptr;
    
}

void _ainline WritePtrTop16Bits(void** ptr,u16 value){
    
    ClearPtrTop16Bits(ptr);
    
    m64 v ={};
    v.ptr = *ptr;
    
    v.u |= ((u64)value) << 48;
    
    *ptr = v.ptr;
};

u16 _ainline GetPtrTop16Bits(void* ptr){
    
    m64 v ={};
    v.ptr = ptr;
    
    return (v.u >> 48);
}

_ainline void* MaskPtrTop16Bits(void* ptr){
    
    ClearPtrTop16Bits(&ptr);
    
    return ptr;
}