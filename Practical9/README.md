# Practical 9 

This folder contains Practical 9 codes, namely magic_square_stub.h,
main_stub.c, magic_square.txt and not_magic_square.txt.

magic_square_stub.h implements the isMagicSquare function to check whether
a square matrix is a magic.The functiontakes the matrix and checks whether 
every row, column and main diagonals sum to the same value M.

main_stub.c receives the matrix and utilise the magic_square_stud.h function
to check whether a square matrix is magic.

magi_square.txt and not_square.txt contains the two matrix that are used to 
test the functionality of the two codes.

## Compile

* gcc main_stub.c -o out

## Execution

* ./out

The output will be the number of either rows or columns of a square matrix
and whether its square 
