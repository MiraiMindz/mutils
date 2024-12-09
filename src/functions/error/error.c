#include "error.h"
#include <stdio.h>
#include <stdlib.h>

void panic_callback(const char *error_msg, const unsigned int error_code,
                    void (*callback)()) {
    if (callback != ((void *)0)) {
        callback();
    }

    fprintf(stderr, "PANIC: %s\n", error_msg);
    exit(error_code);
}

void panic(const char *error_msg, const unsigned int error_code) {
    fprintf(stderr, "PANIC: %s\n", error_msg);
    exit(error_code);
}
