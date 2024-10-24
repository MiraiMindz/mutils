cmake_minimum_required(VERSION 3.10)

project(mutils C)

set(CMAKE_C_STANDARD 89)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

add_compile_options(
    -O3 -ggdb -g -pg -march=native -std=c89
    -Wall -Wextra -Werror -Wshadow -Wformat -Wreturn-type -Wuninitialized
    -Wno-missing-braces -pedantic
    -fsanitize=address
)

set(MUTILS_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/stacks/stacks.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/queues/queues.c
)

add_library(mutils STATIC ${MUTILS_SOURCES})

target_include_directories(mutils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS mutils DESTINATION /usr/local/lib)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/ DESTINATION /usr/local/include/mutils
        FILES_MATCHING PATTERN "*.h"
        PATTERN ".git" EXCLUDE)
