#ifndef MUTILS_FUNCTIONS_ERROR_H
#define MUTILS_FUNCTIONS_ERROR_H

void panic_callback(const char *error_msg, const unsigned int error_code,
                    void (*callback)());
void panic(const char *error_msg, const unsigned int error_code);

#endif

