#pragma once
#include "ttype.h"
#include "mmath.h"

#define     AliceBlue            {0.941176534f, 0.972549081f, 1.000000000f, 1.000000000f}
#define     AntiqueWhite         {0.980392218f, 0.921568692f, 0.843137324f, 1.000000000f}
#define     Aqua                 {0.000000000f, 1.000000000f, 1.000000000f, 1.000000000f}
#define     Aquamarine           {0.498039246f, 1.000000000f, 0.831372619f, 1.000000000f}
#define     Azure                {0.941176534f, 1.000000000f, 1.000000000f, 1.000000000f}
#define     Beige                {0.960784376f, 0.960784376f, 0.862745166f, 1.000000000f}
#define     Bisque               {1.000000000f, 0.894117713f, 0.768627524f, 1.000000000f}
#define     Black                {0.000000000f, 0.000000000f, 0.000000000f, 1.000000000f}
#define     BlanchedAlmond       {1.000000000f, 0.921568692f, 0.803921640f, 1.000000000f}
#define     Blue                 {0.000000000f, 0.000000000f, 1.000000000f, 1.000000000f}
#define     BlueViolet           {0.541176498f, 0.168627456f, 0.886274576f, 1.000000000f}
#define     Brown                {0.647058845f, 0.164705887f, 0.164705887f, 1.000000000f}
#define     BurlyWood            {0.870588303f, 0.721568644f, 0.529411793f, 1.000000000f}
#define     CadetBlue            {0.372549027f, 0.619607866f, 0.627451003f, 1.000000000f}
#define     Chartreuse           {0.498039246f, 1.000000000f, 0.000000000f, 1.000000000f}
#define     Chocolate            {0.823529482f, 0.411764741f, 0.117647067f, 1.000000000f}
#define     Coral                {1.000000000f, 0.498039246f, 0.313725501f, 1.000000000f}
#define     CornflowerBlue       {0.392156899f, 0.584313750f, 0.929411829f, 1.000000000f}
#define     Cornsilk             {1.000000000f, 0.972549081f, 0.862745166f, 1.000000000f}
#define     Crimson              {0.862745166f, 0.078431375f, 0.235294133f, 1.000000000f}
#define     Cyan                 {0.000000000f, 1.000000000f, 1.000000000f, 1.000000000f}
#define     DarkBlue             {0.000000000f, 0.000000000f, 0.545098066f, 1.000000000f}
#define     DarkCyan             {0.000000000f, 0.545098066f, 0.545098066f, 1.000000000f}
#define     DarkGoldenrod        {0.721568644f, 0.525490224f, 0.043137256f, 1.000000000f}
#define     DarkGray             {0.662745118f, 0.662745118f, 0.662745118f, 1.000000000f}
#define     DarkGreen            {0.000000000f, 0.392156899f, 0.000000000f, 1.000000000f}
#define     DarkKhaki            {0.741176486f, 0.717647076f, 0.419607878f, 1.000000000f}
#define     DarkMagenta          {0.545098066f, 0.000000000f, 0.545098066f, 1.000000000f}
#define     DarkOliveGreen       {0.333333343f, 0.419607878f, 0.184313729f, 1.000000000f}
#define     DarkOrange           {1.000000000f, 0.549019635f, 0.000000000f, 1.000000000f}
#define     DarkOrchid           {0.600000024f, 0.196078449f, 0.800000072f, 1.000000000f}
#define     DarkRed              {0.545098066f, 0.000000000f, 0.000000000f, 1.000000000f}
#define     DarkSalmon           {0.913725555f, 0.588235319f, 0.478431404f, 1.000000000f}
#define     DarkSeaGreen         {0.560784340f, 0.737254918f, 0.545098066f, 1.000000000f}
#define     DarkSlateBlue        {0.282352954f, 0.239215702f, 0.545098066f, 1.000000000f}
#define     DarkSlateGray        {0.184313729f, 0.309803933f, 0.309803933f, 1.000000000f}
#define     DarkTurquoise        {0.000000000f, 0.807843208f, 0.819607913f, 1.000000000f}
#define     DarkViolet           {0.580392182f, 0.000000000f, 0.827451050f, 1.000000000f}
#define     DeepPink             {1.000000000f, 0.078431375f, 0.576470613f, 1.000000000f}
#define     DeepSkyBlue          {0.000000000f, 0.749019623f, 1.000000000f, 1.000000000f}
#define     DimGray              {0.411764741f, 0.411764741f, 0.411764741f, 1.000000000f}
#define     DodgerBlue           {0.117647067f, 0.564705908f, 1.000000000f, 1.000000000f}
#define     Firebrick            {0.698039234f, 0.133333340f, 0.133333340f, 1.000000000f}
#define     FloralWhite          {1.000000000f, 0.980392218f, 0.941176534f, 1.000000000f}
#define     ForestGreen          {0.133333340f, 0.545098066f, 0.133333340f, 1.000000000f}
#define     Fuchsia              {1.000000000f, 0.000000000f, 1.000000000f, 1.000000000f}
#define     Gainsboro            {0.862745166f, 0.862745166f, 0.862745166f, 1.000000000f}
#define     GhostWhite           {0.972549081f, 0.972549081f, 1.000000000f, 1.000000000f}
#define     Gold                 {1.000000000f, 0.843137324f, 0.000000000f, 1.000000000f}
#define     Goldenrod            {0.854902029f, 0.647058845f, 0.125490203f, 1.000000000f}
#define     Gray                 {0.501960814f, 0.501960814f, 0.501960814f, 1.000000000f}
#define     Green                {0.000000000f, 0.501960814f, 0.000000000f, 1.000000000f}
#define     GreenYellow          {0.678431392f, 1.000000000f, 0.184313729f, 1.000000000f}
#define     Honeydew             {0.941176534f, 1.000000000f, 0.941176534f, 1.000000000f}
#define     HotPink              {1.000000000f, 0.411764741f, 0.705882370f, 1.000000000f}
#define     IndianRed            {0.803921640f, 0.360784322f, 0.360784322f, 1.000000000f}
#define     Indigo               {0.294117659f, 0.000000000f, 0.509803951f, 1.000000000f}
#define     Ivory                {1.000000000f, 1.000000000f, 0.941176534f, 1.000000000f}
#define     Khaki                {0.941176534f, 0.901960850f, 0.549019635f, 1.000000000f}
#define     Lavender             {0.901960850f, 0.901960850f, 0.980392218f, 1.000000000f}
#define     LavenderBlush        {1.000000000f, 0.941176534f, 0.960784376f, 1.000000000f}
#define     LawnGreen            {0.486274540f, 0.988235354f, 0.000000000f, 1.000000000f}
#define     LemonChiffon         {1.000000000f, 0.980392218f, 0.803921640f, 1.000000000f}
#define     LightBlue            {0.678431392f, 0.847058892f, 0.901960850f, 1.000000000f}
#define     LightCoral           {0.941176534f, 0.501960814f, 0.501960814f, 1.000000000f}
#define     LightCyan            {0.878431439f, 1.000000000f, 1.000000000f, 1.000000000f}
#define     LightGoldenrodYellow {0.980392218f, 0.980392218f, 0.823529482f, 1.000000000f}
#define     LightGreen           {0.564705908f, 0.933333397f, 0.564705908f, 1.000000000f}
#define     LightGray            {0.827451050f, 0.827451050f, 0.827451050f, 1.000000000f}
#define     LightPink            {1.000000000f, 0.713725507f, 0.756862819f, 1.000000000f}
#define     LightSalmon          {1.000000000f, 0.627451003f, 0.478431404f, 1.000000000f}
#define     LightSeaGreen        {0.125490203f, 0.698039234f, 0.666666687f, 1.000000000f}
#define     LightSkyBlue         {0.529411793f, 0.807843208f, 0.980392218f, 1.000000000f}
#define     LightSlateGray       {0.466666698f, 0.533333361f, 0.600000024f, 1.000000000f}
#define     LightSteelBlue       {0.690196097f, 0.768627524f, 0.870588303f, 1.000000000f}
#define     LightYellow          {1.000000000f, 1.000000000f, 0.878431439f, 1.000000000f}
#define     Lime                 {0.000000000f, 1.000000000f, 0.000000000f, 1.000000000f}
#define     LimeGreen            {0.196078449f, 0.803921640f, 0.196078449f, 1.000000000f}
#define     Linen                {0.980392218f, 0.941176534f, 0.901960850f, 1.000000000f}
#define     Magenta              {1.000000000f, 0.000000000f, 1.000000000f, 1.000000000f}
#define     Maroon               {0.501960814f, 0.000000000f, 0.000000000f, 1.000000000f}
#define     MediumAquamarine     {0.400000036f, 0.803921640f, 0.666666687f, 1.000000000f}
#define     MediumBlue           {0.000000000f, 0.000000000f, 0.803921640f, 1.000000000f}
#define     MediumOrchid         {0.729411781f, 0.333333343f, 0.827451050f, 1.000000000f}
#define     MediumPurple         {0.576470613f, 0.439215720f, 0.858823597f, 1.000000000f}
#define     MediumSeaGreen       {0.235294133f, 0.701960802f, 0.443137288f, 1.000000000f}
#define     MediumSlateBlue      {0.482352972f, 0.407843173f, 0.933333397f, 1.000000000f}
#define     MediumSpringGreen    {0.000000000f, 0.980392218f, 0.603921592f, 1.000000000f}
#define     MediumTurquoise      {0.282352954f, 0.819607913f, 0.800000072f, 1.000000000f}
#define     MediumVioletRed      {0.780392230f, 0.082352944f, 0.521568656f, 1.000000000f}
#define     MidnightBlue         {0.098039225f, 0.098039225f, 0.439215720f, 1.000000000f}
#define     MintCream            {0.960784376f, 1.000000000f, 0.980392218f, 1.000000000f}
#define     MistyRose            {1.000000000f, 0.894117713f, 0.882353008f, 1.000000000f}
#define     Moccasin             {1.000000000f, 0.894117713f, 0.709803939f, 1.000000000f}
#define     NavajoWhite          {1.000000000f, 0.870588303f, 0.678431392f, 1.000000000f}
#define     Navy                 {0.000000000f, 0.000000000f, 0.501960814f, 1.000000000f}
#define     OldLace              {0.992156923f, 0.960784376f, 0.901960850f, 1.000000000f}
#define     Olive                {0.501960814f, 0.501960814f, 0.000000000f, 1.000000000f}
#define     OliveDrab            {0.419607878f, 0.556862772f, 0.137254909f, 1.000000000f}
#define     Orange               {1.000000000f, 0.647058845f, 0.000000000f, 1.000000000f}
#define     OrangeRed            {1.000000000f, 0.270588249f, 0.000000000f, 1.000000000f}
#define     Orchid               {0.854902029f, 0.439215720f, 0.839215755f, 1.000000000f}
#define     PaleGoldenrod        {0.933333397f, 0.909803987f, 0.666666687f, 1.000000000f}
#define     PaleGreen            {0.596078455f, 0.984313786f, 0.596078455f, 1.000000000f}
#define     PaleTurquoise        {0.686274529f, 0.933333397f, 0.933333397f, 1.000000000f}
#define     PaleVioletRed        {0.858823597f, 0.439215720f, 0.576470613f, 1.000000000f}
#define     PapayaWhip           {1.000000000f, 0.937254965f, 0.835294187f, 1.000000000f}
#define     PeachPuff            {1.000000000f, 0.854902029f, 0.725490212f, 1.000000000f}
#define     Peru                 {0.803921640f, 0.521568656f, 0.247058839f, 1.000000000f}
#define     Pink                 {1.000000000f, 0.752941251f, 0.796078503f, 1.000000000f}
#define     Plum                 {0.866666734f, 0.627451003f, 0.866666734f, 1.000000000f}
#define     PowderBlue           {0.690196097f, 0.878431439f, 0.901960850f, 1.000000000f}
#define     Purple               {0.501960814f, 0.000000000f, 0.501960814f, 1.000000000f}
#define     Red                  {1.000000000f, 0.000000000f, 0.000000000f, 1.000000000f}
#define     RosyBrown            {0.737254918f, 0.560784340f, 0.560784340f, 1.000000000f}
#define     RoyalBlue            {0.254901975f, 0.411764741f, 0.882353008f, 1.000000000f}
#define     SaddleBrown          {0.545098066f, 0.270588249f, 0.074509807f, 1.000000000f}
#define     Salmon               {0.980392218f, 0.501960814f, 0.447058856f, 1.000000000f}
#define     SandyBrown           {0.956862807f, 0.643137276f, 0.376470625f, 1.000000000f}
#define     SeaGreen             {0.180392161f, 0.545098066f, 0.341176480f, 1.000000000f}
#define     SeaShell             {1.000000000f, 0.960784376f, 0.933333397f, 1.000000000f}
#define     Sienna               {0.627451003f, 0.321568638f, 0.176470593f, 1.000000000f}
#define     Silver               {0.752941251f, 0.752941251f, 0.752941251f, 1.000000000f}
#define     SkyBlue              {0.529411793f, 0.807843208f, 0.921568692f, 1.000000000f}
#define     SlateBlue            {0.415686309f, 0.352941185f, 0.803921640f, 1.000000000f}
#define     SlateGray            {0.439215720f, 0.501960814f, 0.564705908f, 1.000000000f}
#define     Snow                 {1.000000000f, 0.980392218f, 0.980392218f, 1.000000000f}
#define     SpringGreen          {0.000000000f, 1.000000000f, 0.498039246f, 1.000000000f}
#define     SteelBlue            {0.274509817f, 0.509803951f, 0.705882370f, 1.000000000f}
#define     Tan                  {0.823529482f, 0.705882370f, 0.549019635f, 1.000000000f}
#define     Teal                 {0.000000000f, 0.501960814f, 0.501960814f, 1.000000000f}
#define     Thistle              {0.847058892f, 0.749019623f, 0.847058892f, 1.000000000f}
#define     Tomato               {1.000000000f, 0.388235331f, 0.278431386f, 1.000000000f}
#define     Transparent          {0.000000000f, 0.000000000f, 0.000000000f, 0.000000000f}
#define     Turquoise            {0.250980407f, 0.878431439f, 0.815686345f, 1.000000000f}
#define     Violet               {0.933333397f, 0.509803951f, 0.933333397f, 1.000000000f}
#define     Wheat                {0.960784376f, 0.870588303f, 0.701960802f, 1.000000000f}
#define     White                {1.000000000f, 1.000000000f, 1.000000000f, 1.000000000f}
#define     WhiteSmoke           {0.960784376f, 0.960784376f, 0.960784376f, 1.000000000f}
#define     Yellow               {1.000000000f, 1.000000000f, 0.000000000f, 1.000000000f}
#define     YellowGreen          {0.603921592f, 0.803921640f, 0.196078449f, 1.000000000f}
