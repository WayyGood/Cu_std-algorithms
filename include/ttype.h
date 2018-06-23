#pragma once

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef  char s8;
typedef  short s16;
typedef  int s32;
typedef  long long s64;

typedef char logic; //MARK:should we make this 4 bytes long?

typedef float f32;
typedef double f64;

#if __x86_64__ || _M_X64

typedef unsigned long long ptrsize;

#else

typedef unsigned int ptrsize;

#endif


union m32{
    u32 i;
    f32 f;
    
    operator u32(){
        
        return i;
    }
    
    operator f32(){
        
        return f;
    }
    
    void operator=(u32 o){
        i = o;
    }
    
    void operator=(f32 o){
        f= o;
    }
};

union m64{
    u64 i;
    f64 f;
    
    operator u64(){
        
        return i;
    }
    
    operator f64(){
        
        return f;
    }
    
    void operator=(u64 o){
        i = o;
    }
    
    void operator=(f64 o){
        f= o;
    }
};