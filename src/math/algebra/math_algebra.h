#ifndef MUTILS_MATH_ALGEBRA_H
#define MUTILS_MATH_ALGEBRA_H

#define max(x, y) ({\
    __auto_type __x = (x);\
    __auto_type __y = (y);\
    __x > __y ? __x : __y})

#define min(x, y) ({\
    __auto_type __x = (x);\
    __auto_type __y = (y);\
    __x < __y ? __x : __y})

#define clamp(val, low, high) ({\
    __auto_type __val = (val);\
    __auto_type __low = (low);\
    __auto_type __high = (high);\
    __val < __low ? __low : (__val > __high ? __high : __val); })

// Don't define this macro if the the C standard is C99 or above
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L
    #define round(num) ({\
        __auto_type __num = (num);\
        __num >= 0.0 ? (int)(__num + 0.5) : (int)(__num - 0.5); })

#endif

#endif