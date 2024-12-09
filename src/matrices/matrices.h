#ifndef MUTILS_MATRICES_H
#define MUTILS_MATRICES_H

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
