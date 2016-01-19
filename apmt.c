#include <stdio.h>
#include <stdlib.h>
 
//Define functions that will be used in the program
void
multiplyMatrices();
void
getRowColumn(
int
*row,
int
*col,
char
*matrix);
int
*createMatrix(
int
*row,
int
*col);
void
getMatrixValues(
int
*source,
int
row,
int
col,
char
*name);
int
*destroyMatrix(
int
*matrix);
void
printMatrix(
const
int
*source,
int
row,
int
col);
 
//Start of main
int
main()
{
//Call multiplyMatrices function
multiplyMatrices();
//End main
return
(0);
//End of main
}
 
//Start of multiplyMatrices function
void
multiplyMatrices()
{
//Declare variables
int
oneRow, oneCol, twoRow, twoCol, i, j, k;
 
//Call getRowColumn to ask user for the matrix size for both matrices
getRowColumn(&oneRow, &oneCol,
"Matrix 1"
);
getRowColumn(&twoRow, &twoCol,
"Matrix 2"
);
 
//The number of columns in oneMatrix must equal the number of rows in twoMatrix
if
(oneCol != twoRow)
{
printf
(
"The number of columns in the first matrix must equal the number of rows in the second matrix.\n"
);
exit
(EXIT_FAILURE);
}
 
//Create the arrays in the heap memory
int
*oneMatrix = createMatrix(&oneRow, &oneCol);
int
*twoMatrix = createMatrix(&twoRow, &twoCol);
int
*multipliedMatrix = createMatrix(&oneRow, &twoCol);
 
//Declare pointer variables to store the initial locations of
//my arrays for later use
int
*initialOneMatrix, *initialTwoMatrix, *initialMultipliedMatrix;
initialOneMatrix = oneMatrix;
initialTwoMatrix = twoMatrix;
initialMultipliedMatrix = multipliedMatrix;
 
//Ask user for the values of each matrix
getMatrixValues(oneMatrix, oneRow, oneCol,
"Matrix 1"
);
getMatrixValues(twoMatrix, twoRow, twoCol,
"Matrix 2"
);
 
//Multiply the matrices (took me like 5 hours in
//the debugger to figure out how to arrange these loops lol)
//A for loop while i is less than oneRow(number of rows in first matrix)
for
(i = 0; i < oneRow; i++)
{
//A for loop while j is less than twoCol
for
(j = 0; j < twoCol; j++)
{
//Increment the address of oneMatrix by its number of columns multiplied by i
oneMatrix += (oneCol * i);
//Increment the address of twoMatrix by j
twoMatrix += j;
 
//A for loop while k is less than oneCol
for
(k = 0; k < oneCol; k++)
{
//Multiply the current entries of the matracies and add the answer to the current entry for the multiplied matrix
*multipliedMatrix += *oneMatrix * *twoMatrix;
//Increment oneMatrix by 1
oneMatrix++;
//Increment twoMatrix by the number of its columns
twoMatrix += twoCol;
}
//Increment multipliedMatrix
multipliedMatrix++;
//"Rewind" oneMatrix to its original address
oneMatrix = initialOneMatrix;
//"Rewind" twoMatrix to its original address
twoMatrix = initialTwoMatrix;
}
}
 
//"Rewind" multipliedMatrix to its original address
multipliedMatrix = initialMultipliedMatrix;
 
//Newline to make it pretty
printf
(
"\n"
);
//Call printMatrix function to print oneMatrix
printMatrix(oneMatrix, oneRow, oneCol);
//Newline, multiplication symbol, and two more newlines to make it pretty
printf
(
"\n*\n\n"
);
//Call printMatrix function to print twoMatrix
printMatrix(twoMatrix, twoRow, twoCol);
//Newline, equal sign, and two more newlines to make it pretty
printf
(
"\n=\n\n"
);
//Call printMatrix function to print multipliedMatrix
printMatrix(multipliedMatrix, oneRow, twoCol);
 
//Call destroyMatrix function to clear clear all of the matrices from memory
destroyMatrix(oneMatrix);
destroyMatrix(twoMatrix);
destroyMatrix(multipliedMatrix);
 
return
;
//End of multiplyMatrices
}
 
//Start of getRowColumn function
void
getRowColumn(
int
*row,
int
*col,
char
*matrix)
{
//Ask user how many rows for the specified matrix
printf
(
"Please enter the number of rows for %s\n"
, matrix);
//Set variable 'row' to what the user input
scanf
(
"%d"
, row);
//Ask user how many columns for the specified array
printf
(
"Please enter the number of columns for %s\n"
, matrix);
//Set variable 'col' to what the user input
scanf
(
"%d"
, col);
//End of getRowColumn
}
 
//Start of createMatrix function
int
*createMatrix(
int
*row,
int
*col)
{
//Initialize the new matrix in the heap memory using calloc with row times
//col for an argument and using sizeof to let calloc know the size of int
int
*newMatrix =
calloc
(*row * *col,
sizeof
(
int
));
 
//Check if newMatrix is nonexistent, if so the memory
//was unable to allocate and exit the program
if
(!newMatrix)
{
printf
(
"Unable to allocate memory.\n"
);
exit
(EXIT_FAILURE);
}
 
//Return the newMatrix to where the function was called
return
(newMatrix);
//End of createMatrix
}
 
//Start of getMatrixValues
void
getMatrixValues(
int
*source,
int
row,
int
col,
char
*name)
{
//Declare counting variables for the for loops
int
i, j;
 
//For loop to cycle through the rows
for
(i = 0; i < row; i++)
{
//For loop to cycle through the columns
for
(j = 0; j < col; j++)
{
//Ask user for a value for the specified entry
printf
(
"Enter the value for %d %d for %s\n"
, i, j, name);
//Set source to what the user input, then increment source by 1
scanf
(
"%d"
, source++);
}
}
//End of getMatrixValues
}
 
//Start of destroyMatrix function
int
*destroyMatrix(
int
*matrix)
{
//Check if matrix exists
if
(matrix)
{
//Function to free the matrix from memory
free
(matrix);
}
return
(NULL);
//End of destroyMatrix
}
 
//Start of printMatrix function
void
printMatrix(
const
int
*source,
int
row,
int
col)
{
//Declare counting variables for the for loops
int
i, j;
 
//Cycle through the rows
for
(i = 0; i < row; i++)
{
//Print beginning "side" to the matrix
printf
(
"|"
);
//Cycle through the columns
for
(j = 0; j < col; j++)
{
//Print the specified matrix entry
printf
(
"%5d"
, *source++);
}
//Print an ending "side" to the matrix with a newline
printf
(
"|\n"
);
}
//End of printMatrix
}
 
