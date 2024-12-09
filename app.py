#!/usr/bin/env python3.10

# I've made this file to automatically generate the header file for the matrices
# Because the file is pretty much the same thing repeated with minor changes
# like multiplications, so instead of wasting hours typing out all the function
# I'm writing this script that automates the generation of declarations for all
# matrices types, judge me if you want.
#                                                                        - Mirai

# [x] - Identity
# [x] - Zero
# [x] - Multiplication X * Y
# [x]     - Matrix-Matrix Product
# [x]     - Hadamard product
# [x] - Multiplication N (Multiplies N matrices)
# [x]     - Matrix-Matrix Product
# [x]     - Hadamard product
# [x] - Trace
# [x] - Quaternion
# [x]     - from quaternion
# [x]     - to quaternion
# [x] - Transpose
# [x] - Scale
# [x]     - Scale Scalar multiplication
# [x]     - Scale Transform
# [x] - Determinant
# [x]     - Leibniz formula
# [x]     - Laplace expansion formula
# [ ] - Swap Row (Swaps two rows)
# [ ] - Swap Column (Swaps two columns)
# [ ] - Swap Column-Row (Swaps a column for a row)
# [ ] - Division X * Y
# [ ] - Division N (Divides N matrices)
# [ ] - Addition X + Y
# [ ] - Addition N (Adds N matrices)
# [ ] - Subtraction X - Y
# [ ] - Subtraction N (Subtracts N matrices)
# [ ] - Padding (get an XY mat and make it a perfect square based on the bigger side)
# [ ] - Flip X
# [ ] - Flip Y
# [ ] - Rotate Left
# [ ] - Rotate Right
# [ ] - Invert/Inverse the matrix

MATRICES = [
    (2, 2),
    (2, 3),
    (2, 4),
    (3, 2),
    (3, 3),
    (3, 4),
    (4, 2),
    (4, 3),
    (4, 4),
]

# Zero Matrix
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function RETURNS a value of type mat{a[0]}_t")
        print(f" * This produces the Zero of the matrix {a[0]}x{a[1]} */")
        print(f"mat{a[0]}_t mat{a[0]}_zero_ret();\n")
    else:
        print(f"/* This function RETURNS a value of type mat{a[0]}x{a[1]}_t")
        print(f" * This produces the Zero of the matrix {a[0]}x{a[1]} */")
        print(f"mat{a[0]}x{a[1]}_t mat{a[0]}x{a[1]}_zero_ret();\n")
print("\n\n")


# Identity Matrix
for a in MATRICES:
    if (a[0] == a[1]):
        print(f"/* This function RETURNS a value of type mat{a[0]}_t")
        print(f" * This produces the Identity of the matrix {a[0]}x{a[1]} */")
        print(f"mat{a[0]}_t mat{a[0]}_identity_ret();\n")
print("\n\n")

# Trace
for a in MATRICES:
    if (a[0] == a[1]):
        print(f"/* This function RETURNS a value of type mat{a[0]}_t")
        print(f" * This produces the Trace of the matrix {a[0]}x{a[1]} */")
        print(f"mat{a[0]}_t mat{a[0]}_trace_ret();\n")
print("\n\n")

# Quaternion
for a in MATRICES:
    if (a[0] == a[1]) and (a[0] == 4):
        print(f"/* This function RETURNS the type of mat{a[0]}_t")
        print(f" * This function converts a quaternion into a {a[0]}x{a[0]} matrix */")
        print(f"mat{a[0]}_t quat_to_mat{a[0]}x{a[0]}_ret(const MATRIX_{a[0]}x{a[0]}_TYPE* quaternion);\n")
        print("\n")
        print(f"/* This function RETURNS the type of MATRIX_{a[0]}x{a[0]}_TYPE*")
        print(f" * This function converts a {a[0]}x{a[0]} matrix into a quaternion")
        print(f" MATRIX_{a[0]}x{a[0]}_TYPE* quat_from_mat{a[0]}_ret(const mat{a[0]}_t matrix); */\n")
print("\n\n")

# Transpose
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function RETURNS the type of mat{a[1]}x{a[0]}_t")
        print(f" * This function transpose the {a[0]}x{a[1]} into a {a[1]}x{a[0]} matrix */")
        print(f"mat{a[0]}_t mat{a[0]}_transpose_ret(mat{a[0]}_t matrix);\n")
    else:
        print(f"/* This function RETURNS the type of mat{a[0]}x{a[1]}_t")
        print(f" * This function transpose the {a[0]}x{a[1]} into a {a[1]}x{a[0]} matrix */")
        print(f"mat{a[1]}x{a[0]}_t mat{a[0]}x{a[1]}_transpose_ret(mat{a[0]}x{a[1]}_t matrix);\n")
print("\n\n")

# Scale Transformation
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function RETURNS the type of mat{a[0]}x{a[1]}_t")
        print(f" * This function produces the Scale Transformation of a {a[0]}x{a[1]} by a array of MATRIX_{a[0]}x{a[1]}_TYPE[{a[1]}] */")
        print(f"mat{a[0]}_t mat{a[0]}_scale_transform_ret(mat{a[0]}_t matrix, MATRIX_{a[0]}x{a[1]}_TYPE** transform_array);\n")
print("\n\n")

# Scale Scalar Multiplication
for a in MATRICES:
    print(f"/* This function RETURNS the type of mat{a[0]}x{a[1]}_t")
    print(f" * This function produces the Scale Scalar Multiplication of a {a[0]}x{a[1]} by a scaalr of MATRIX_{a[0]}x{a[1]}_TYPE */")
    if a[0] == a[1]:
        print(f"mat{a[0]}_t mat{a[0]}_scale_scalar_mul_ret(mat{a[0]}_t matrix, MATRIX_{a[0]}x{a[1]}_TYPE scalar);\n")
    else:
        print(f"mat{a[0]}x{a[1]}_t mat{a[0]}x{a[1]}_scale_scalar_mul_ret(mat{a[0]}x{a[1]}_t matrix, MATRIX_{a[0]}x{a[1]}_TYPE scalar);\n")
print("\n\n")

# Leibniz Determinant
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function RETURNS the type of mat{a[0]}_t")
        print(f" * This function calculates the Determinant using the Leibniz formula of the {a[0]}x{a[0]} matrix */")
        print(f"mat{a[0]}_t mat{a[0]}_det_leibniz_ret(const mat{a[0]}_t* matrix);\n")
print("\n\n")

# Laplace Expansion Determinant
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function RETURNS the type of mat{a[0]}_t")
        print(f" * This function calculates the Determinant using the Laplace Explansion formula of the {a[0]}x{a[0]} matrix */")
        print(f"mat{a[0]}_t mat{a[0]}_det_laplace_ret(const mat{a[0]}_t* matrix);\n")
print("\n\n")


# Matrix-Matrix Multiplication
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0]:
            if a[0] == b[1]:
                print(f"/* This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"/* This function RETURNS the result of type mat{a[0]}x{b[1]}_t")
            
            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Matrix-Matrix multiplication method. */")
            if a[0] == b[1]:
                print(f"mat{a[0]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{b[1]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
        elif a == b:
            if a[0] == b[0]:
                print(f"/* This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"/* This function RETURNS the result of type mat{a[0]}x{b[0]}_t")

            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Matrix-Matrix multiplication method")
            print(f" * but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}. */")
            if a[0] == b[0]:
                print(f"mat{a[0]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{b[0]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")


# Hadamard Product
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0] and a[0] == b[1] and a[0] != a[1]:
            if a[0] == a[1]:
                print(f"/* This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"/* This function RETURNS the result of type mat{a[0]}x{a[1]}_t")


            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Hadamard product method.")
            print(f" * but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}. */")
            if a[0] == a[1]:
                print(f"mat{a[0]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{a[1]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
        elif a == b:
            if a[0] == a[1]:
                print(f"/* This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"/* This function RETURNS the result of type mat{a[0]}x{a[1]}_t")

            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Hadamard product multiplication method */")
            if a[0] == a[1]:
                print(f"mat{a[0]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{a[1]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")


# Variadic Matrix-Matrix multiplication
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function RETURNS the result of type mat{a[0]}_t")
        print(f" * We are multiplying a variadic number of {a[0]}x{a[0]} matrices")
        print(f" * We are using the Matrix-Matrix multiplication method */")
        print(f"mat{a[0]}_t mul_mat_{a[0]}x{a[0]}_var_ret(unsigned long count, ...);\n")

# Variadic Hadamard multiplication
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function RETURNS the result of type mat{a[0]}_t")
        print(f" * We are multiplying a variadic number of {a[0]}x{a[0]} matrices")
        print(f" * We are using the Hadamard Product multiplication method */")
        print(f"mat{a[0]}_t mul_had_{a[0]}x{a[0]}_var_ret(unsigned long count, ...);\n")
    else:
        print(f"/* This function RETURNS the result of type mat{a[0]}x{a[1]}_t")
        print(f" * We are multiplying a variadic number of {a[0]}x{a[1]} matrices")
        print(f" * We are using the Hadamard Product multiplication method */")
        print(f"mat{a[0]}x{a[1]}_t mul_had_{a[0]}x{a[1]}_var_ret(unsigned long count, ...);\n")


# Swap Rows
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This functions RETURNS the result of type mat{a[0]}_t")
        print(f" * We are swapping two rows from this matrix */")
        print(f"mat{a[0]}_t swap_rows_mat{a[0]}_t(unsigned char x, unsigned char y);\n")
    else:
        print(f"/* This functions RETURNS the result of type mat{a[0]}x{a[1]}_t")
        print(f" * We are swapping two rows from this matrix */")
        print(f"mat{a[0]}x{a[1]}_t swap_rows_mat{a[0]}x{a[1]}_t(unsigned char x, unsigned char y);\n")


################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################

print("\n\n\n")
print("/******************************************************************************")
print(" *        Below are the POINTERS implementation of all functions             *")
print(" *        I've made this just in case, because sometimes we need/want to     *")
print(" *        overwrite some stuff and it's better to use a pointer for this.    *")
print("******************************************************************************/")
print("\n\n\n")

# Zero Matrix
for a in MATRICES:
    if a[0] == a[1]:
        print(f"/* This function DOES NOT RETURNS a value")
        print(f" * It stores the result in a pointer of type mat{a[0]}_t")
        print(f" * This produces the Zero of the matrix {a[0]}x{a[1]} */")
        print(f"void mat{a[0]}_zero_ptr(mat{a[0]}_t* dest);\n")
    else:
        print(f"/* This function DOES NOT RETURNS a value")
        print(f" * It stores the result in a pointer of type mat{a[0]}x{a[1]}_t")
        print(f" * This produces the Zero of the matrix {a[0]}x{a[1]} */")
        print(f"void mat{a[0]}x{a[1]}_zero_ptr(mat{a[0]}x{a[1]}_t* dest);\n")
print("\n\n")

# Identity Matrix
for a in MATRICES:
    if (a[0] == a[1]):
        print(f"/* This function DOES NOT RETURNS a value")
        print(f" * It stores the result in a pointer of type mat{a[0]}_t")
        print(f" * This produces the Identity of the matrix {a[0]}x{a[1]} */")
        print(f"void mat{a[0]}_identity_ptr(mat{a[0]}_t* dest);\n")
print("\n\n")



# Matrix-Matrix Multiplication
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0]:
            print(f"/* This function DOES NOT RETURNS the result")
            if a[0] == b[1]:
                print(f" * It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f" * It uses a destination POINTER of type mat{a[0]}x{b[1]}_t")
            
            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Matrix-Matrix multiplication method. */")
            if a[0] == b[1]:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{b[1]}_t* dest);\n")
        elif a == b:
            print(f"/* This function DOES NOT RETURNS the result")
            if a[0] == b[0]:
                print(f" * It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f" * It uses a destination POINTER of type mat{a[0]}x{b[0]}_t")

            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Matrix-Matrix multiplication method")
            print(f" * but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}. */")
            if a[0] == b[0]:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{b[0]}_t* dest);\n")


# Hadamard Product
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0] and a[0] == b[1] and a[0] != a[1]:
            print(f"/* This function DOES NOT RETURNS the result")
            if a[0] == a[1]:
                print(f" * It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f" * It uses a destination POINTER of type mat{a[0]}x{a[1]}_t")

            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Hadamard product method.")
            print(f" * but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}. */")
            if a[0] == a[1]:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{a[1]}_t* dest);\n")
        elif a == b:
            print(f"/* This function DOES NOT RETURNS the result")
            if a[0] == a[1]:
                print(f" * It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f" * It uses a destination POINTER of type mat{a[0]}x{a[1]}_t")
            
            print(f" * We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f" * the Hadamard product multiplication method. */")
            if a[0] == a[1]:
                print(f"void mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{a[1]}_t* dest);\n")
