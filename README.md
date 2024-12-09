# M UTILS Library

This library contains everything that I find missing and I'm always making in C.

> BTW This library uses ANSI C because compatibility reasons.
>
> and yeah it is also bare C without any compiler extensions too because yes.
>
> and finally no C++ because we all know that C++ is the weaker C.

## What you will find here?

list:

- Type Aliases
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
- Matrices
- Vectors
- Graphs
- Extended Math Lib
- Algorithms
- Color Lib
- Functions
    - Error
        - Error handling utils like panic
- and much more (I'll expand this list over time)

every data-type has a dynamic and static variant too.

## Build, Install and Use

```bash
git clone https://github.com/MiraiMindz/mutils.git
cd mutils
mkdir build
cd build
cmake ..
make
sudo make install
```

Including in CMAKE project:

```cmake
cmake_minimum_required(VERSION 3.10)
project(YourProject C)

find_library(MUTILS_LIB NAMES mutils PATHS /usr/local/lib)
include_directories(/usr/local/include/mutils)

add_executable(YourProject main.c)
target_link_libraries(YourProject ${MUTILS_LIB})
```
