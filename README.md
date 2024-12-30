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
    - Dynamic Arrays (MUTILS_DA)
- and much more (I'll expand this list over time)

every data-type has a dynamic and static variant too.
