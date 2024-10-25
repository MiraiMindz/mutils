#ifndef MUTILS_VECTORS_H
#define MUTILS_VECTORS_H

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