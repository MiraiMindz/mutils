#ifndef ALIASES_H
#define ALIASES_H

typedef float f32;
typedef double f64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef signed char i8;
typedef signed short i16;
typedef signed int i32;
typedef signed long i64;
typedef unsigned long usize;
typedef signed long isize;
typedef void *ptr;
typedef char *str;

#ifndef __bool_true_false_are_defined
#define __bool_true_false_are_defined 1
#ifndef BOOL_DEFINED
#define BOOL_DEFINED

typedef enum { false = 0, true = 1 } bool;

#endif
#endif

#endif
