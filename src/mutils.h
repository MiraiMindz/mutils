/******************************************************************************* 
# M UTILS Library

This library contains everything that I find missing and I'm always making in C.

It's a single header file, so to include it just copy it to your project and
reference it in your code.

> BTW This library uses ANSI C89 because compatibility reasons.
>
> and yeah it is also bare C without any compiler extensions too because yes.
>
> and finally no C++ because we all know that C++ is the weaker C.

## How to use it (and some notes)

If you _really_ want to use compiler extensions and/or standard library definitions
you can specify two macros `MUTILS_USE_COMPILER_EXTENSIONS` and `MUTILS_USE_STD_INCLUDES`
respectively.

You can also configure the library, by defining some macros before #including it.

How do you use it?

specify what you want and include the library, example:

```c
#define MUTILS_SOURCE 1
#define MUTILS_TYPE_ALIASES 1
#define MUTILS_MATH 1
#define MUTILS_MATH_CONSTANTS 1
#define MUTILS_MATRICES 1
#include "mutils.h"
```

> note: the 1 after the define is just to ensures that it is defined.

> note2: the MUTILS_SOURCE MUST BE defined before any module that you want to
> include the source implementation.


This will define the following library modules:
- all the source implementations, not just prototypes.
- type aliases
- enables any math module to be activated.
- active the math constant module.
- enables the matrices module (not a math module).

and yes, defining MUTILS_MATH does not include all the math related modules by
default, you need to enable each one of them.

## What you will find here?

> you will find the module name between parenthesis for each module listed here.

- Type Aliases (MUTILS_TYPE_ALIASES)
- Queues
    - Static Queue
    - dynamic queue
- Stacks
    - static stack
    - dynamic stack
- Lists
    - static linked list
    - static double linked list
    - static circular stack
    - static circular queue
    - static circular linked list
    - static circular double linked list
    - dynamic linked list
    - dynamic double linked list
    - dynamic circular stack
    - dynamic circular queue
    - dynamic circular linked list
    - dynamic circular double linked list
- Trees
    - basic node tree
- Hashes
    - hash map
    - hash table
- Maps
    - Basic Map
- Matrices (MUTILS_MATRICES)
- Vectors (MUTILS_VECTORS)
- Graphs
- Extended Math Lib (MUTILS_MATH)
    - Constants (MUTILS_MATH_CONSTANTS)
    - Algebra (MUTILS_MATH_ALGEBRA)
- Algorithms
- Color Lib
- Functions
    - Error
        - Error handling utils like panic
- and much more (I'll expand this list over time)

every data-type has a dynamic and static variant too.
*******************************************************************************/

#ifndef MUTILS_H
#define MUTILS_H

#ifndef MUTILS_TYPE_ALIASES
    typedef float f32;
    typedef double f64;
    typedef unsigned char u8;
    typedef unsigned short u16;
    typedef unsigned int u32;
    typedef signed char i8;
    typedef signed short i16;
    typedef signed int i32;
    typedef void *ptr;
    typedef char *str;
    #if defined(__x86_64__) && !defined(__ILP32__)      /* 64 Bits */
        #if __STDC_VERSION__ >= 199901L                 /* C99 or newer */
            typedef unsigned long long u64;
            typedef signed long long i64;
            typedef unsigned long long usize;
            typedef signed long long isize;
        #else                                           /* older than C99 */
            typedef unsigned long u64;
            typedef signed long i64;
            typedef unsigned long usize;
            typedef signed long isize;
        #endif
    #else                                               /* 32 Bits */
        #if __STDC_VERSION__ >= 199901L
            typedef unsigned long long u64;
            typedef signed long long i64;
        typedef unsigned long long usize;
        typedef signed long long isize;
        #else                                           /* older than C99 */  
            typedef unsigned long u64;  
            typedef signed long i64;
            typedef unsigned long usize;    
            typedef signed long isize;
        #endif
    #endif

    #if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L
        #ifndef __bool_true_false_are_defined
            #define __bool_true_false_are_defined 1
            #ifndef BOOL_DEFINED
                #define BOOL_DEFINED
                typedef enum { false = 0, true = 1 } bool;
            #endif
        #endif
    #else
        #if define(MUTILS_USE_STD_INCLUDES)
            #include <stdbool.h>
        #endif
    #endif
#endif

#ifndef MUTILS_MATH
    #ifndef MUTILS_MATH_CONSTANTS
        #ifndef MUTILS_MATH_E
        #define MUTILS_MATH_E               2.71828182845904523536   /* Euler's number, e */
        #endif

        #ifndef MUTILS_MATH_LOG2E
        #define MUTILS_MATH_LOG2E           1.44269504088896340736   /* log2(e) */
        #endif

        #ifndef MUTILS_MATH_LOG10E
        #define MUTILS_MATH_LOG10E          0.434294481903251827651  /* log10(e) */  
        #endif

        #ifndef MUTILS_MATH_LN2
        #define MUTILS_MATH_LN2             0.693147180559945309417  /* ln(2) */
        #endif

        #ifndef MUTILS_MATH_LN10
        #define MUTILS_MATH_LN10            2.30258509299404568402   /* ln(10) */
        #endif

        #ifndef MUTILS_MATH_PI
        #define MUTILS_MATH_PI              3.14159265358979323846   /* Pi */
        #endif

        #ifndef MUTILS_MATH_PI_2
        #define MUTILS_MATH_PI_2            1.57079632679489661923   /* Pi / 2 */
        #endif

        #ifndef MUTILS_MATH_PI_4
        #define MUTILS_MATH_PI_4            0.785398163397448309616  /* Pi / 4 */
        #endif

        #ifndef MUTILS_MATH_1_PI
        #define MUTILS_MATH_1_PI            0.318309886183790671538  /* 1 / Pi */
        #endif

        #ifndef MUTILS_MATH_2_PI
        #define MUTILS_MATH_2_PI            0.636619772367581343076  /* 2 / Pi */
        #endif

        #ifndef MUTILS_MATH_2_SQRTPI
        #define MUTILS_MATH_2_SQRTPI        1.12837916709551257390   /* 2 / sqrt(Pi) */
        #endif

        #ifndef MUTILS_MATH_SQRT2
        #define MUTILS_MATH_SQRT2           1.41421356237309504880   /* sqrt(2) */
        #endif

        #ifndef MUTILS_MATH_SQRT1_2
        #define MUTILS_MATH_SQRT1_2         0.707106781186547524401  /* 1 / sqrt(2) */
        #endif

        #ifndef MUTILS_MATH_TAU
        #define MUTILS_MATH_TAU             6.28318530717958647693   /* Tau (2 * Pi) */
        #endif

        #ifndef MUTILS_MATH_GOLDEN_RATIO
        #define MUTILS_MATH_GOLDEN_RATIO    1.61803398874989484820 /* The Golden Ratio */
        #endif

        #ifndef MUTILS_MATH_EULER_GAMMA
        #define MUTILS_MATH_EULER_GAMMA     0.57721566490153286060 /* Euler-Mascheroni constant */
        #endif

        #ifndef MUTILS_MATH_SQRT3
        #define MUTILS_MATH_SQRT3           1.73205080756887729353   /* sqrt(3) */
        #endif

        #ifndef MUTILS_MATH_SQRT5
        #define MUTILS_MATH_SQRT5           2.23606797749978969640   /* sqrt(5) */
        #endif

        #ifndef MUTILS_MATH_CBRT2
        #define MUTILS_MATH_CBRT2           1.25992104989487316477   /* cbrt(2) */
        #endif

        #ifndef MUTILS_MATH_CBRT3
        #define MUTILS_MATH_CBRT3           1.44224957030740838232   /* cbrt(3) */
        #endif

        #ifndef MUTILS_MATH_CBRT5
        #define MUTILS_MATH_CBRT5           1.71000000000000000000   /* cbrt(5) */
        #endif

        #ifndef MUTILS_MATH_DEG_TO_RAD
        #define MUTILS_MATH_DEG_TO_RAD      0.01745329251994329576 /* 1deg in radians */
        #endif

        #ifndef MUTILS_MATH_RAD_TO_DEG
        #define MUTILS_MATH_RAD_TO_DEG      57.29577951308232087680 /* 1 radian in degrees */
        #endif
    #endif

    #ifndef MUTILS_MATH_ALGEBRA
        #if defined(__GNUC__) && defined(MUTILS_USE_COMPILER_EXTENSIONS)
            #define max(x, y) ({ \
                __auto_type __x = (x); \
                __auto_type __y = (y); \
                __x > __y ? __x : __y; \
            })

            #define min(x, y) ({ \
                __auto_type __x = (x); \
                __auto_type __y = (y); \
                __x < __y ? __x : __y; \
            })

            #define clamp(val, low, high) ({ \
                __auto_type __val = (val); \
                __auto_type __low = (low); \
                __auto_type __high = (high); \
                __val < __low ? __low : (__val > __high ? __high : __val); \
            })

            #if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L
                #define round(num) ({ \
                    __auto_type __num = (num); \
                    __num >= 0.0 ? (int)(__num + 0.5) : (int)(__num - 0.5); \
                })
            #endif
        #else
            /*  These macros below may evaluate their arguments multiple times, 
                leading to unexpected behavior if the arguments have side 
                effects. example: max(++a, b). */
            #define max(x, y) ((x) > (y) ? (x) : (y))
            #define min(x, y) ((x) < (y) ? (x) : (y))
            #define clamp(val, low, high) ((val) < (low) ? (low) : ((val) > (high) ? (high) : (val)))
            #if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L
                #define round(num) ((num) >= 0.0 ? (int)((num) + 0.5) : (int)((num) - 0.5))
            #endif
        #endif
    #endif
#endif

#ifndef MUTILS_VECTORS
    #ifndef VECTOR_2_TYPE
    #define VECTOR_2_TYPE float
    #endif

    #ifndef VECTOR_3_TYPE
    #define VECTOR_3_TYPE float
    #endif

    #ifndef VECTOR_4_TYPE
    #define VECTOR_4_TYPE float
    #endif

    typedef union vec2 {
        struct {
            VECTOR_2_TYPE x, y;
        };
        VECTOR_2_TYPE array[2];
    } vec2_t;

    typedef union vec3 {
        struct {
            VECTOR_3_TYPE x, y, z;
        };
        struct {
            VECTOR_3_TYPE r, g, b;
        }
        VECTOR_3_TYPE array[3];
    } vec3_t;

    typedef union vec4 {
        struct {
            VECTOR_4_TYPE x, y, z, w;
        };
        struct {
            VECTOR_4_TYPE r, g, b, a;
        }
        VECTOR_4_TYPE array[4];
    } vec4_t;
#endif

#ifndef MUTILS_MATRICES
    #ifndef GENERIC_MATRIX_TYPE
    #define GENERIC_MATRIX_TYPE float
    #endif

    #ifndef MATRIX_2x2_TYPE
    #define MATRIX_2x2_TYPE float
    #endif

    #ifndef MATRIX_2x3_TYPE
    #define MATRIX_2x3_TYPE float
    #endif

    #ifndef MATRIX_2x4_TYPE
    #define MATRIX_2x4_TYPE float
    #endif

    #ifndef MATRIX_3x3_TYPE
    #define MATRIX_3x3_TYPE float
    #endif

    #ifndef MATRIX_3x2_TYPE
    #define MATRIX_3x2_TYPE float
    #endif

    #ifndef MATRIX_3x4_TYPE
    #define MATRIX_3x4_TYPE float
    #endif

    #ifndef MATRIX_4x4_TYPE
    #define MATRIX_4x4_TYPE float
    #endif

    #ifndef MATRIX_4x2_TYPE
    #define MATRIX_4x2_TYPE float
    #endif

    #ifndef MATRIX_4x3_TYPE
    #define MATRIX_4x3_TYPE float
    #endif

    typedef struct matXxY {
        signed long rows;
        signed long cols;
        GENERIC_MATRIX_TYPE *data;
    } matXxY_t;

    /*
        [
            [a, b],
            [c, d]
        ]
    */
    typedef union mat2 {
        struct rows_s {
            MATRIX_2x2_TYPE row1[2], row2[2];
        } rows;
        MATRIX_2x2_TYPE matrix[2][2];
        struct elements_s {
            MATRIX_2x2_TYPE a1, a2, b1, b2;
        } elements;
        MATRIX_2x2_TYPE flat[4];
    } mat2_t;

    /*
        [
            [a, b, c],
            [d, e, f]
        ]
    */
    typedef union mat2x3 {
        struct rows_s {
            MATRIX_2x3_TYPE row1[3], row2[3];
        } rows;
        MATRIX_2x3_TYPE matrix[2][3];
        struct elements_s {
            MATRIX_2x3_TYPE a1, a2, a3, b1, b2, b3;
        } elements;
        MATRIX_2x3_TYPE flat[6];
    } mat2x3_t;

    /*
        [
            [a, b, c, d],
            [e, f, g, h]
        ]
    */
    typedef union mat2x4 {
        struct rows_s {
            MATRIX_2x4_TYPE row1[4], row2[4];
        } rows;
        MATRIX_2x4_TYPE matrix[2][4];
        struct elements_s {
            MATRIX_2x4_TYPE a1, a2, a3, a4, b1, b2, b3, b4;
        } elements;
        MATRIX_2x4_TYPE flat[8];
    } mat2x4_t;

    /*
        [
            [a, b, c, d]
            [e, f, g, h]
            [i, j, k, l]
            [m, n, o, p]
        ]
    */
    typedef union mat4 {
        struct rows_s {
            MATRIX_4x4_TYPE row1[4], row2[4], row3[4], row4[4];
        } rows;
        MATRIX_4x4_TYPE matrix[4][4];
        struct elements_s {
            MATRIX_4x4_TYPE a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2,
                d3, d4;
        } elements;
        MATRIX_4x4_TYPE flat[16];
    } mat4_t;

    /*
        [
            [a, b]
            [c, d]
            [e, f]
            [g, h]
        ]
    */
    typedef union mat4x2 {
        struct rows_s {
            MATRIX_4x2_TYPE row1[2], row2[2], row3[2], row4[2];
        } rows;
        MATRIX_4x2_TYPE matrix[4][2];
        struct elements_s {
            MATRIX_4x2_TYPE a1, a2, b1, b2, c1, c2, d1, d2;
        } elements;
        MATRIX_4x2_TYPE flat[8];
    } mat4x2_t;

    /*
        [
            [a, b, c]
            [d, e, f]
            [g, h, i]
            [j, k, l]
        ]
    */
    typedef union mat4x3 {
        struct rows_s {
            MATRIX_4x3_TYPE row1[3], row2[3], row3[3], row4[3];
        } rows;
        MATRIX_4x3_TYPE matrix[4][3];
        struct elements_s {
            MATRIX_4x3_TYPE a1, a2, a3, b1, b2, b3, c1, c2, c3, d1, d2, d3;
        } elements;
        MATRIX_4x3_TYPE flat[12];
    } mat4x3_t;

    /*
        [
            [a, b, c]
            [d, e, f]
            [g, h, i]
        ]
    */
    typedef union mat3 {
        struct rows_s {
            MATRIX_3x3_TYPE row1[3], row2[3], row3[3];
        } rows;
        MATRIX_3x3_TYPE matrix[3][3];
        struct elements_s {
            MATRIX_3x3_TYPE a1, a2, a3, b1, b2, b3, c1, c2, c3;
        } elements;
        MATRIX_3x3_TYPE flat[9];
    } mat3_t;

    /*
        [
            [a, b]
            [c, d]
            [e, f]
        ]
    */
    typedef union mat3x2 {
        struct rows_s {
            MATRIX_3x2_TYPE row1[2], row2[2], row3[2];
        } rows;
        MATRIX_3x2_TYPE matrix[3][2];
        struct elements_s {
            MATRIX_3x2_TYPE a1, a2, b1, b2, c1, c2;
        } elements;
        MATRIX_3x2_TYPE flat[6];
    } mat3x2_t;

    /*
        [
            [a, b, c, d]
            [e, f, g, h]
            [i, j, k, l]
        ]
    */
    typedef union mat3x4 {
        struct rows_s {
            MATRIX_3x4_TYPE row1[4], row2[4], row3[4];
        } rows;
        MATRIX_3x4_TYPE matrix[3][4];
        struct elements_s {
            MATRIX_3x4_TYPE a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4;
        } elements;
        MATRIX_3x4_TYPE flat[12];
    } mat3x4_t;
#endif

#endif /* MUTILS_H */