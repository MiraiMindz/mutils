// This function RETURNS a value of type mat2_t
// This produces the Zero of the matrix 2x2
mat2_t mat2_zero_ret();

// This function RETURNS a value of type mat2x3_t
// This produces the Zero of the matrix 2x3
mat2x3_t mat2x3_zero_ret();

// This function RETURNS a value of type mat2x4_t
// This produces the Zero of the matrix 2x4
mat2x4_t mat2x4_zero_ret();

// This function RETURNS a value of type mat3x2_t
// This produces the Zero of the matrix 3x2
mat3x2_t mat3x2_zero_ret();

// This function RETURNS a value of type mat3_t
// This produces the Zero of the matrix 3x3
mat3_t mat3_zero_ret();

// This function RETURNS a value of type mat3x4_t
// This produces the Zero of the matrix 3x4
mat3x4_t mat3x4_zero_ret();

// This function RETURNS a value of type mat4x2_t
// This produces the Zero of the matrix 4x2
mat4x2_t mat4x2_zero_ret();

// This function RETURNS a value of type mat4x3_t
// This produces the Zero of the matrix 4x3
mat4x3_t mat4x3_zero_ret();

// This function RETURNS a value of type mat4_t
// This produces the Zero of the matrix 4x4
mat4_t mat4_zero_ret();




// This function RETURNS a value of type mat2_t
// This produces the Identity of the matrix 2x2
mat2_t mat2_identity_ret();

// This function RETURNS a value of type mat3_t
// This produces the Identity of the matrix 3x3
mat3_t mat3_identity_ret();

// This function RETURNS a value of type mat4_t
// This produces the Identity of the matrix 4x4
mat4_t mat4_identity_ret();




// This function RETURNS a value of type mat2_t
// This produces the Trace of the matrix 2x2
mat2_t mat2_trace_ret();

// This function RETURNS a value of type mat3_t
// This produces the Trace of the matrix 3x3
mat3_t mat3_trace_ret();

// This function RETURNS a value of type mat4_t
// This produces the Trace of the matrix 4x4
mat4_t mat4_trace_ret();




// This function RETURNS the type of mat4_t
// This function converts a quaternion into a 4x4 matrix
mat4_t quat_to_mat4x4(const MATRIX_4x4_TYPE* quaternion);



// This function RETURNS the type of MATRIX_4x4_TYPE*
// This function converts a 4x4 matrix into a quaternion
 MATRIX_4x4_TYPE* quat_from_mat4(const mat4_t matrix);




// This function RETURNS the type of mat2x2_t
// This function transpose the 2x2 into a 2x2 matrix
mat2_t mat2_transpose(mat2_t matrix);

// This function RETURNS the type of mat2x3_t
// This function transpose the 2x3 into a 3x2 matrix
mat3x2_t mat2x3_transpose(mat2x3_t matrix);

// This function RETURNS the type of mat2x4_t
// This function transpose the 2x4 into a 4x2 matrix
mat4x2_t mat2x4_transpose(mat2x4_t matrix);

// This function RETURNS the type of mat3x2_t
// This function transpose the 3x2 into a 2x3 matrix
mat2x3_t mat3x2_transpose(mat3x2_t matrix);

// This function RETURNS the type of mat3x3_t
// This function transpose the 3x3 into a 3x3 matrix
mat3_t mat3_transpose(mat3_t matrix);

// This function RETURNS the type of mat3x4_t
// This function transpose the 3x4 into a 4x3 matrix
mat4x3_t mat3x4_transpose(mat3x4_t matrix);

// This function RETURNS the type of mat4x2_t
// This function transpose the 4x2 into a 2x4 matrix
mat2x4_t mat4x2_transpose(mat4x2_t matrix);

// This function RETURNS the type of mat4x3_t
// This function transpose the 4x3 into a 3x4 matrix
mat3x4_t mat4x3_transpose(mat4x3_t matrix);

// This function RETURNS the type of mat4x4_t
// This function transpose the 4x4 into a 4x4 matrix
mat4_t mat4_transpose(mat4_t matrix);




// This function RETURNS the result of type mat2_t
// We are multiplying 2x2 by 2x2 using
// the Matrix-Matrix multiplication method.
mat2_t mul_mat_2x2_2x2_ret(mat2x2_t x, mat2x2_t y);

// This function RETURNS the result of type mat2x3_t
// We are multiplying 2x2 by 2x3 using
// the Matrix-Matrix multiplication method.
mat2x3_t mul_mat_2x2_2x3_ret(mat2x2_t x, mat2x3_t y);

// This function RETURNS the result of type mat2x4_t
// We are multiplying 2x2 by 2x4 using
// the Matrix-Matrix multiplication method.
mat2x4_t mul_mat_2x2_2x4_ret(mat2x2_t x, mat2x4_t y);

// This function RETURNS the result of type mat2_t
// We are multiplying 2x3 by 2x3 using
// the Matrix-Matrix multiplication method
// but here we transpose 2x3 into 3x2.
mat2_t mul_mat_2x3_2x3_ret(mat2x3_t x, mat2x3_t y);

// This function RETURNS the result of type mat2_t
// We are multiplying 2x3 by 3x2 using
// the Matrix-Matrix multiplication method.
mat2_t mul_mat_2x3_3x2_ret(mat2x3_t x, mat3x2_t y);

// This function RETURNS the result of type mat2x3_t
// We are multiplying 2x3 by 3x3 using
// the Matrix-Matrix multiplication method.
mat2x3_t mul_mat_2x3_3x3_ret(mat2x3_t x, mat3x3_t y);

// This function RETURNS the result of type mat2x4_t
// We are multiplying 2x3 by 3x4 using
// the Matrix-Matrix multiplication method.
mat2x4_t mul_mat_2x3_3x4_ret(mat2x3_t x, mat3x4_t y);

// This function RETURNS the result of type mat2_t
// We are multiplying 2x4 by 2x4 using
// the Matrix-Matrix multiplication method
// but here we transpose 2x4 into 4x2.
mat2_t mul_mat_2x4_2x4_ret(mat2x4_t x, mat2x4_t y);

// This function RETURNS the result of type mat2_t
// We are multiplying 2x4 by 4x2 using
// the Matrix-Matrix multiplication method.
mat2_t mul_mat_2x4_4x2_ret(mat2x4_t x, mat4x2_t y);

// This function RETURNS the result of type mat2x3_t
// We are multiplying 2x4 by 4x3 using
// the Matrix-Matrix multiplication method.
mat2x3_t mul_mat_2x4_4x3_ret(mat2x4_t x, mat4x3_t y);

// This function RETURNS the result of type mat2x4_t
// We are multiplying 2x4 by 4x4 using
// the Matrix-Matrix multiplication method.
mat2x4_t mul_mat_2x4_4x4_ret(mat2x4_t x, mat4x4_t y);

// This function RETURNS the result of type mat3x2_t
// We are multiplying 3x2 by 2x2 using
// the Matrix-Matrix multiplication method.
mat3x2_t mul_mat_3x2_2x2_ret(mat3x2_t x, mat2x2_t y);

// This function RETURNS the result of type mat3_t
// We are multiplying 3x2 by 2x3 using
// the Matrix-Matrix multiplication method.
mat3_t mul_mat_3x2_2x3_ret(mat3x2_t x, mat2x3_t y);

// This function RETURNS the result of type mat3x4_t
// We are multiplying 3x2 by 2x4 using
// the Matrix-Matrix multiplication method.
mat3x4_t mul_mat_3x2_2x4_ret(mat3x2_t x, mat2x4_t y);

// This function RETURNS the result of type mat3_t
// We are multiplying 3x2 by 3x2 using
// the Matrix-Matrix multiplication method
// but here we transpose 3x2 into 2x3.
mat3_t mul_mat_3x2_3x2_ret(mat3x2_t x, mat3x2_t y);

// This function RETURNS the result of type mat3x2_t
// We are multiplying 3x3 by 3x2 using
// the Matrix-Matrix multiplication method.
mat3x2_t mul_mat_3x3_3x2_ret(mat3x3_t x, mat3x2_t y);

// This function RETURNS the result of type mat3_t
// We are multiplying 3x3 by 3x3 using
// the Matrix-Matrix multiplication method.
mat3_t mul_mat_3x3_3x3_ret(mat3x3_t x, mat3x3_t y);

// This function RETURNS the result of type mat3x4_t
// We are multiplying 3x3 by 3x4 using
// the Matrix-Matrix multiplication method.
mat3x4_t mul_mat_3x3_3x4_ret(mat3x3_t x, mat3x4_t y);

// This function RETURNS the result of type mat3_t
// We are multiplying 3x4 by 3x4 using
// the Matrix-Matrix multiplication method
// but here we transpose 3x4 into 4x3.
mat3_t mul_mat_3x4_3x4_ret(mat3x4_t x, mat3x4_t y);

// This function RETURNS the result of type mat3x2_t
// We are multiplying 3x4 by 4x2 using
// the Matrix-Matrix multiplication method.
mat3x2_t mul_mat_3x4_4x2_ret(mat3x4_t x, mat4x2_t y);

// This function RETURNS the result of type mat3_t
// We are multiplying 3x4 by 4x3 using
// the Matrix-Matrix multiplication method.
mat3_t mul_mat_3x4_4x3_ret(mat3x4_t x, mat4x3_t y);

// This function RETURNS the result of type mat3x4_t
// We are multiplying 3x4 by 4x4 using
// the Matrix-Matrix multiplication method.
mat3x4_t mul_mat_3x4_4x4_ret(mat3x4_t x, mat4x4_t y);

// This function RETURNS the result of type mat4x2_t
// We are multiplying 4x2 by 2x2 using
// the Matrix-Matrix multiplication method.
mat4x2_t mul_mat_4x2_2x2_ret(mat4x2_t x, mat2x2_t y);

// This function RETURNS the result of type mat4x3_t
// We are multiplying 4x2 by 2x3 using
// the Matrix-Matrix multiplication method.
mat4x3_t mul_mat_4x2_2x3_ret(mat4x2_t x, mat2x3_t y);

// This function RETURNS the result of type mat4_t
// We are multiplying 4x2 by 2x4 using
// the Matrix-Matrix multiplication method.
mat4_t mul_mat_4x2_2x4_ret(mat4x2_t x, mat2x4_t y);

// This function RETURNS the result of type mat4_t
// We are multiplying 4x2 by 4x2 using
// the Matrix-Matrix multiplication method
// but here we transpose 4x2 into 2x4.
mat4_t mul_mat_4x2_4x2_ret(mat4x2_t x, mat4x2_t y);

// This function RETURNS the result of type mat4x2_t
// We are multiplying 4x3 by 3x2 using
// the Matrix-Matrix multiplication method.
mat4x2_t mul_mat_4x3_3x2_ret(mat4x3_t x, mat3x2_t y);

// This function RETURNS the result of type mat4x3_t
// We are multiplying 4x3 by 3x3 using
// the Matrix-Matrix multiplication method.
mat4x3_t mul_mat_4x3_3x3_ret(mat4x3_t x, mat3x3_t y);

// This function RETURNS the result of type mat4_t
// We are multiplying 4x3 by 3x4 using
// the Matrix-Matrix multiplication method.
mat4_t mul_mat_4x3_3x4_ret(mat4x3_t x, mat3x4_t y);

// This function RETURNS the result of type mat4_t
// We are multiplying 4x3 by 4x3 using
// the Matrix-Matrix multiplication method
// but here we transpose 4x3 into 3x4.
mat4_t mul_mat_4x3_4x3_ret(mat4x3_t x, mat4x3_t y);

// This function RETURNS the result of type mat4x2_t
// We are multiplying 4x4 by 4x2 using
// the Matrix-Matrix multiplication method.
mat4x2_t mul_mat_4x4_4x2_ret(mat4x4_t x, mat4x2_t y);

// This function RETURNS the result of type mat4x3_t
// We are multiplying 4x4 by 4x3 using
// the Matrix-Matrix multiplication method.
mat4x3_t mul_mat_4x4_4x3_ret(mat4x4_t x, mat4x3_t y);

// This function RETURNS the result of type mat4_t
// We are multiplying 4x4 by 4x4 using
// the Matrix-Matrix multiplication method.
mat4_t mul_mat_4x4_4x4_ret(mat4x4_t x, mat4x4_t y);

// This function RETURNS the result of type mat2_t
// We are multiplying 2x2 by 2x2 using
// the Hadamard product multiplication method
mat2_t mul_had_2x2_2x2_ret(mat2x2_t x, mat2x2_t y);

// This function RETURNS the result of type mat2x3_t
// We are multiplying 2x3 by 2x3 using
// the Hadamard product multiplication method
mat2x3_t mul_had_2x3_2x3_ret(mat2x3_t x, mat2x3_t y);

// This function RETURNS the result of type mat2x3_t
// We are multiplying 2x3 by 3x2 using
// the Hadamard product method.
// but here we transpose 3x2 into 2x3.
mat2x3_t mul_had_2x3_3x2_ret(mat2x3_t x, mat3x2_t y);

// This function RETURNS the result of type mat2x4_t
// We are multiplying 2x4 by 2x4 using
// the Hadamard product multiplication method
mat2x4_t mul_had_2x4_2x4_ret(mat2x4_t x, mat2x4_t y);

// This function RETURNS the result of type mat2x4_t
// We are multiplying 2x4 by 4x2 using
// the Hadamard product method.
// but here we transpose 4x2 into 2x4.
mat2x4_t mul_had_2x4_4x2_ret(mat2x4_t x, mat4x2_t y);

// This function RETURNS the result of type mat3x2_t
// We are multiplying 3x2 by 2x3 using
// the Hadamard product method.
// but here we transpose 2x3 into 3x2.
mat3x2_t mul_had_3x2_2x3_ret(mat3x2_t x, mat2x3_t y);

// This function RETURNS the result of type mat3x2_t
// We are multiplying 3x2 by 3x2 using
// the Hadamard product multiplication method
mat3x2_t mul_had_3x2_3x2_ret(mat3x2_t x, mat3x2_t y);

// This function RETURNS the result of type mat3_t
// We are multiplying 3x3 by 3x3 using
// the Hadamard product multiplication method
mat3_t mul_had_3x3_3x3_ret(mat3x3_t x, mat3x3_t y);

// This function RETURNS the result of type mat3x4_t
// We are multiplying 3x4 by 3x4 using
// the Hadamard product multiplication method
mat3x4_t mul_had_3x4_3x4_ret(mat3x4_t x, mat3x4_t y);

// This function RETURNS the result of type mat3x4_t
// We are multiplying 3x4 by 4x3 using
// the Hadamard product method.
// but here we transpose 4x3 into 3x4.
mat3x4_t mul_had_3x4_4x3_ret(mat3x4_t x, mat4x3_t y);

// This function RETURNS the result of type mat4x2_t
// We are multiplying 4x2 by 2x4 using
// the Hadamard product method.
// but here we transpose 2x4 into 4x2.
mat4x2_t mul_had_4x2_2x4_ret(mat4x2_t x, mat2x4_t y);

// This function RETURNS the result of type mat4x2_t
// We are multiplying 4x2 by 4x2 using
// the Hadamard product multiplication method
mat4x2_t mul_had_4x2_4x2_ret(mat4x2_t x, mat4x2_t y);

// This function RETURNS the result of type mat4x3_t
// We are multiplying 4x3 by 3x4 using
// the Hadamard product method.
// but here we transpose 3x4 into 4x3.
mat4x3_t mul_had_4x3_3x4_ret(mat4x3_t x, mat3x4_t y);

// This function RETURNS the result of type mat4x3_t
// We are multiplying 4x3 by 4x3 using
// the Hadamard product multiplication method
mat4x3_t mul_had_4x3_4x3_ret(mat4x3_t x, mat4x3_t y);

// This function RETURNS the result of type mat4_t
// We are multiplying 4x4 by 4x4 using
// the Hadamard product multiplication method
mat4_t mul_had_4x4_4x4_ret(mat4x4_t x, mat4x4_t y);





////////////////////////////////////////////////////////////////////////////////
//        Below are the POINTERS implementation of all functions              //
//        I've made this just in case, because sometimes we need/want to      //
//        overwrite some stuff and it's better to use a pointer for this.     //
////////////////////////////////////////////////////////////////////////////////




// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat2_t
// This produces the Zero of the matrix 2x2
void mat2_zero_ptr(mat2_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat2x3_t
// This produces the Zero of the matrix 2x3
void mat2x3_zero_ptr(mat2x3_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat2x4_t
// This produces the Zero of the matrix 2x4
void mat2x4_zero_ptr(mat2x4_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat3x2_t
// This produces the Zero of the matrix 3x2
void mat3x2_zero_ptr(mat3x2_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat3_t
// This produces the Zero of the matrix 3x3
void mat3_zero_ptr(mat3_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat3x4_t
// This produces the Zero of the matrix 3x4
void mat3x4_zero_ptr(mat3x4_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat4x2_t
// This produces the Zero of the matrix 4x2
void mat4x2_zero_ptr(mat4x2_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat4x3_t
// This produces the Zero of the matrix 4x3
void mat4x3_zero_ptr(mat4x3_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat4_t
// This produces the Zero of the matrix 4x4
void mat4_zero_ptr(mat4_t* dest);




// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat2_t
// This produces the Identity of the matrix 2x2
void mat2_identity_ptr(mat2_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat3_t
// This produces the Identity of the matrix 3x3
void mat3_identity_ptr(mat3_t* dest);

// This function DOES NOT RETURNS a value
// It stores the result in a pointer of type mat4_t
// This produces the Identity of the matrix 4x4
void mat4_identity_ptr(mat4_t* dest);




// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2_t
// We are multiplying 2x2 by 2x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x2_2x2_ptr(mat2x2_t x, mat2x2_t y, mat2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x3_t
// We are multiplying 2x2 by 2x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x2_2x3_ptr(mat2x2_t x, mat2x3_t y, mat2x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x4_t
// We are multiplying 2x2 by 2x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x2_2x4_ptr(mat2x2_t x, mat2x4_t y, mat2x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2_t
// We are multiplying 2x3 by 2x3 using
// the Matrix-Matrix multiplication method
// but here we transpose 2x3 into 3x2.
void mul_mat_2x3_2x3_ptr(mat2x3_t x, mat2x3_t y, mat2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2_t
// We are multiplying 2x3 by 3x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x3_3x2_ptr(mat2x3_t x, mat3x2_t y, mat2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x3_t
// We are multiplying 2x3 by 3x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x3_3x3_ptr(mat2x3_t x, mat3x3_t y, mat2x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x4_t
// We are multiplying 2x3 by 3x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x3_3x4_ptr(mat2x3_t x, mat3x4_t y, mat2x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2_t
// We are multiplying 2x4 by 2x4 using
// the Matrix-Matrix multiplication method
// but here we transpose 2x4 into 4x2.
void mul_mat_2x4_2x4_ptr(mat2x4_t x, mat2x4_t y, mat2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2_t
// We are multiplying 2x4 by 4x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x4_4x2_ptr(mat2x4_t x, mat4x2_t y, mat2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x3_t
// We are multiplying 2x4 by 4x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x4_4x3_ptr(mat2x4_t x, mat4x3_t y, mat2x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x4_t
// We are multiplying 2x4 by 4x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_2x4_4x4_ptr(mat2x4_t x, mat4x4_t y, mat2x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x2_t
// We are multiplying 3x2 by 2x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x2_2x2_ptr(mat3x2_t x, mat2x2_t y, mat3x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3_t
// We are multiplying 3x2 by 2x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x2_2x3_ptr(mat3x2_t x, mat2x3_t y, mat3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x4_t
// We are multiplying 3x2 by 2x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x2_2x4_ptr(mat3x2_t x, mat2x4_t y, mat3x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3_t
// We are multiplying 3x2 by 3x2 using
// the Matrix-Matrix multiplication method
// but here we transpose 3x2 into 2x3.
void mul_mat_3x2_3x2_ptr(mat3x2_t x, mat3x2_t y, mat3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x2_t
// We are multiplying 3x3 by 3x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x3_3x2_ptr(mat3x3_t x, mat3x2_t y, mat3x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3_t
// We are multiplying 3x3 by 3x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x3_3x3_ptr(mat3x3_t x, mat3x3_t y, mat3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x4_t
// We are multiplying 3x3 by 3x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x3_3x4_ptr(mat3x3_t x, mat3x4_t y, mat3x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3_t
// We are multiplying 3x4 by 3x4 using
// the Matrix-Matrix multiplication method
// but here we transpose 3x4 into 4x3.
void mul_mat_3x4_3x4_ptr(mat3x4_t x, mat3x4_t y, mat3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x2_t
// We are multiplying 3x4 by 4x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x4_4x2_ptr(mat3x4_t x, mat4x2_t y, mat3x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3_t
// We are multiplying 3x4 by 4x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x4_4x3_ptr(mat3x4_t x, mat4x3_t y, mat3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x4_t
// We are multiplying 3x4 by 4x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_3x4_4x4_ptr(mat3x4_t x, mat4x4_t y, mat3x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x2_t
// We are multiplying 4x2 by 2x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x2_2x2_ptr(mat4x2_t x, mat2x2_t y, mat4x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x3_t
// We are multiplying 4x2 by 2x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x2_2x3_ptr(mat4x2_t x, mat2x3_t y, mat4x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4_t
// We are multiplying 4x2 by 2x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x2_2x4_ptr(mat4x2_t x, mat2x4_t y, mat4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4_t
// We are multiplying 4x2 by 4x2 using
// the Matrix-Matrix multiplication method
// but here we transpose 4x2 into 2x4.
void mul_mat_4x2_4x2_ptr(mat4x2_t x, mat4x2_t y, mat4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x2_t
// We are multiplying 4x3 by 3x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x3_3x2_ptr(mat4x3_t x, mat3x2_t y, mat4x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x3_t
// We are multiplying 4x3 by 3x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x3_3x3_ptr(mat4x3_t x, mat3x3_t y, mat4x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4_t
// We are multiplying 4x3 by 3x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x3_3x4_ptr(mat4x3_t x, mat3x4_t y, mat4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4_t
// We are multiplying 4x3 by 4x3 using
// the Matrix-Matrix multiplication method
// but here we transpose 4x3 into 3x4.
void mul_mat_4x3_4x3_ptr(mat4x3_t x, mat4x3_t y, mat4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x2_t
// We are multiplying 4x4 by 4x2 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x4_4x2_ptr(mat4x4_t x, mat4x2_t y, mat4x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x3_t
// We are multiplying 4x4 by 4x3 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x4_4x3_ptr(mat4x4_t x, mat4x3_t y, mat4x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4_t
// We are multiplying 4x4 by 4x4 using
// the Matrix-Matrix multiplication method.
void mul_mat_4x4_4x4_ptr(mat4x4_t x, mat4x4_t y, mat4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2_t
// We are multiplying 2x2 by 2x2 using
// the Hadamard product multiplication method
void mul_had_2x2_2x2_ptr(mat2x2_t x, mat2x2_t y, mat2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x3_t
// We are multiplying 2x3 by 2x3 using
// the Hadamard product multiplication method
void mul_had_2x3_2x3_ptr(mat2x3_t x, mat2x3_t y, mat2x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x3_t
// We are multiplying 2x3 by 3x2 using
// the Hadamard product method.
// but here we transpose 3x2 into 2x3.
void mul_mat_2x3_3x2_ptr(mat2x3_t x, mat3x2_t y, mat2x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x4_t
// We are multiplying 2x4 by 2x4 using
// the Hadamard product multiplication method
void mul_had_2x4_2x4_ptr(mat2x4_t x, mat2x4_t y, mat2x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat2x4_t
// We are multiplying 2x4 by 4x2 using
// the Hadamard product method.
// but here we transpose 4x2 into 2x4.
void mul_mat_2x4_4x2_ptr(mat2x4_t x, mat4x2_t y, mat2x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x2_t
// We are multiplying 3x2 by 2x3 using
// the Hadamard product method.
// but here we transpose 2x3 into 3x2.
void mul_mat_3x2_2x3_ptr(mat3x2_t x, mat2x3_t y, mat3x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x2_t
// We are multiplying 3x2 by 3x2 using
// the Hadamard product multiplication method
void mul_had_3x2_3x2_ptr(mat3x2_t x, mat3x2_t y, mat3x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3_t
// We are multiplying 3x3 by 3x3 using
// the Hadamard product multiplication method
void mul_had_3x3_3x3_ptr(mat3x3_t x, mat3x3_t y, mat3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x4_t
// We are multiplying 3x4 by 3x4 using
// the Hadamard product multiplication method
void mul_had_3x4_3x4_ptr(mat3x4_t x, mat3x4_t y, mat3x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat3x4_t
// We are multiplying 3x4 by 4x3 using
// the Hadamard product method.
// but here we transpose 4x3 into 3x4.
void mul_mat_3x4_4x3_ptr(mat3x4_t x, mat4x3_t y, mat3x4_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x2_t
// We are multiplying 4x2 by 2x4 using
// the Hadamard product method.
// but here we transpose 2x4 into 4x2.
void mul_mat_4x2_2x4_ptr(mat4x2_t x, mat2x4_t y, mat4x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x2_t
// We are multiplying 4x2 by 4x2 using
// the Hadamard product multiplication method
void mul_had_4x2_4x2_ptr(mat4x2_t x, mat4x2_t y, mat4x2_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x3_t
// We are multiplying 4x3 by 3x4 using
// the Hadamard product method.
// but here we transpose 3x4 into 4x3.
void mul_mat_4x3_3x4_ptr(mat4x3_t x, mat3x4_t y, mat4x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4x3_t
// We are multiplying 4x3 by 4x3 using
// the Hadamard product multiplication method
void mul_had_4x3_4x3_ptr(mat4x3_t x, mat4x3_t y, mat4x3_t* dest);

// This function DOES NOT RETURNS the result
// It uses a destination POINTER of type mat4_t
// We are multiplying 4x4 by 4x4 using
// the Hadamard product multiplication method
void mul_had_4x4_4x4_ptr(mat4x4_t x, mat4x4_t y, mat4_t* dest);

