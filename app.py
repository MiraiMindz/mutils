#!/usr/bin/env python3.10

# I've made this file to automatically generate the header file for the matrices
# Because the file is pretty much the same thing repeated with minor changes
# like multiplications, so instead of wasting hours typing out all the function
# I'm writing this script that automates the generation of declarations for all
# matrices types, judge me if you want.
#                                                                        - Mirai

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
        print(f"// This function RETURNS a value of type mat{a[0]}_t")
        print(f"// This produces the Zero of the matrix {a[0]}x{a[1]}")
        print(f"mat{a[0]}_t mat{a[0]}_zero_ret();\n")
    else:
        print(f"// This function RETURNS a value of type mat{a[0]}x{a[1]}_t")
        print(f"// This produces the Zero of the matrix {a[0]}x{a[1]}")
        print(f"mat{a[0]}x{a[1]}_t mat{a[0]}x{a[1]}_zero_ret();\n")
print("\n\n")


# Identity Matrix
for a in MATRICES:
    if (a[0] == a[1]):
        print(f"// This function RETURNS a value of type mat{a[0]}_t")
        print(f"// This produces the Identity of the matrix {a[0]}x{a[1]}")
        print(f"mat{a[0]}_t mat{a[0]}_identity_ret();\n")
print("\n\n")

for a in MATRICES:
    if (a[0] == a[1]):
        print(f"// This function RETURNS a value of type mat{a[0]}_t")
        print(f"// This produces the Trace of the matrix {a[0]}x{a[1]}")
        print(f"mat{a[0]}_t mat{a[0]}_trace_ret();\n")
print("\n\n")

# Matrix-Matrix Multiplication
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0]:
            if a[0] == b[1]:
                print(f"// This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"// This function RETURNS the result of type mat{a[0]}x{b[1]}_t")
            
            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Matrix-Matrix multiplication method.")
            if a[0] == b[1]:
                print(f"mat{a[0]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{b[1]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
        elif a == b:
            if a[0] == b[0]:
                print(f"// This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"// This function RETURNS the result of type mat{a[0]}x{b[0]}_t")

            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Matrix-Matrix multiplication method")
            print(f"// but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}.")
            if a[0] == b[0]:
                print(f"mat{a[0]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{b[0]}_t mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")


# Hadamard Product
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0] and a[0] == b[1] and a[0] != a[1]:
            if a[0] == a[1]:
                print(f"// This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"// This function RETURNS the result of type mat{a[0]}x{a[1]}_t")


            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Hadamard product method.")
            print(f"// but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}.")
            if a[0] == a[1]:
                print(f"mat{a[0]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{a[1]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
        elif a == b:
            if a[0] == a[1]:
                print(f"// This function RETURNS the result of type mat{a[0]}_t")
            else:
                print(f"// This function RETURNS the result of type mat{a[0]}x{a[1]}_t")

            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Hadamard product multiplication method")
            if a[0] == a[1]:
                print(f"mat{a[0]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")
            else:
                print(f"mat{a[0]}x{a[1]}_t mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ret(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y);\n")




################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################
################################################################################################################################################################

print("\n\n\n")
print("////////////////////////////////////////////////////////////////////////////////")
print("//        Below are the POINTERS implementation of all functions              //")
print("//        I've made this just in case, because sometimes we need/want to      //")
print("//        overwrite some stuff and it's better to use a pointer for this.     //")
print("////////////////////////////////////////////////////////////////////////////////")
print("\n\n\n")

# Zero Matrix
for a in MATRICES:
    if a[0] == a[1]:
        print(f"// This function DOES NOT RETURNS a value")
        print(f"// It stores the result in a pointer of type mat{a[0]}_t")
        print(f"// This produces the Zero of the matrix {a[0]}x{a[1]}")
        print(f"void mat{a[0]}_zero_ptr(mat{a[0]}_t* dest);\n")
    else:
        print(f"// This function DOES NOT RETURNS a value")
        print(f"// It stores the result in a pointer of type mat{a[0]}x{a[1]}_t")
        print(f"// This produces the Zero of the matrix {a[0]}x{a[1]}")
        print(f"void mat{a[0]}x{a[1]}_zero_ptr(mat{a[0]}x{a[1]}_t* dest);\n")
print("\n\n")

# Identity Matrix
for a in MATRICES:
    if (a[0] == a[1]):
        print(f"// This function DOES NOT RETURNS a value")
        print(f"// It stores the result in a pointer of type mat{a[0]}_t")
        print(f"// This produces the Identity of the matrix {a[0]}x{a[1]}")
        print(f"void mat{a[0]}_identity_ptr(mat{a[0]}_t* dest);\n")
print("\n\n")


# Matrix-Matrix Multiplication
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0]:
            print(f"// This function DOES NOT RETURNS the result")
            if a[0] == b[1]:
                print(f"// It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f"// It uses a destination POINTER of type mat{a[0]}x{b[1]}_t")
            
            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Matrix-Matrix multiplication method.")
            if a[0] == b[1]:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{b[1]}_t* dest);\n")
        elif a == b:
            print(f"// This function DOES NOT RETURNS the result")
            if a[0] == b[0]:
                print(f"// It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f"// It uses a destination POINTER of type mat{a[0]}x{b[0]}_t")

            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Matrix-Matrix multiplication method")
            print(f"// but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}.")
            if a[0] == b[0]:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{b[0]}_t* dest);\n")


# Hadamard Product
for a in MATRICES:
    for b in MATRICES:
        if a[1] == b[0] and a[0] == b[1] and a[0] != a[1]:
            print(f"// This function DOES NOT RETURNS the result")
            if a[0] == a[1]:
                print(f"// It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f"// It uses a destination POINTER of type mat{a[0]}x{a[1]}_t")

            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Hadamard product method.")
            print(f"// but here we transpose {b[0]}x{b[1]} into {b[1]}x{b[0]}.")
            if a[0] == a[1]:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_mat_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{a[1]}_t* dest);\n")
        elif a == b:
            print(f"// This function DOES NOT RETURNS the result")
            if a[0] == a[1]:
                print(f"// It uses a destination POINTER of type mat{a[0]}_t")
            else:
                print(f"// It uses a destination POINTER of type mat{a[0]}x{a[1]}_t")
            
            print(f"// We are multiplying {a[0]}x{a[1]} by {b[0]}x{b[1]} using")
            print(f"// the Hadamard product multiplication method")
            if a[0] == a[1]:
                print(f"void mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}_t* dest);\n")
            else:
                print(f"void mul_had_{a[0]}x{a[1]}_{b[0]}x{b[1]}_ptr(mat{a[0]}x{a[1]}_t x, mat{b[0]}x{b[1]}_t y, mat{a[0]}x{a[1]}_t* dest);\n")
