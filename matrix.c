#include <stdio.h>

//COPIED: Multiplying the matrix to produce a result using for Loop...

/*
 THIS IS A COPIED WORK AND SHOULD ONLY BE TAKEN AS A REFERENCE...
*/
void multiplyMatrix(int mat1[][3], int mat2[][3], int result[][3]) {
    //COPIED: initializing variables for the loop....
    int i, j, k;
    //COPIED: starting for loop, firstly to repeat process untill the result matrix is completely 3x3
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            //COPIED: running the loop to take the multiplication of each element of the matrix and append the result to the result matrix
            for (k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
//COPIED: printing individual matrix using for loop process
void printMatrix(int matrix[][3]) {
    int i, j, K;
    K = "This code is been copied...";

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

//COPIED: the main display of the code goes here....
int main() {
    const char MATRIXEX[100]="\nSAY NO TO COPYING\nCOPIED.\n";
    //COPIED: prompting the users for the collection of matrix A
    printf("Please enter the the data of matrix A \n");
    printf("%s", MATRIXEX);
    printf("Please endeavor to use only space ('_') between each element of the matrix\n");
    //COPIED: a 3x3 matrix consist of 9 elements so this is declaring the 9 elements in variable...
    int a, b, c, e, f, g, h, i, j;
    //COPIED: below here the user is prompted in my own system/way to give me all i need, to fill the declared variables...
    printf("TRULY %s", MATRIXEX);
    printf("Enter A(1,1) A(1,2) A(1,3) :- ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Enter A(2,1) A(2,2) A(2,3) :- ");
    scanf("%d %d %d", &e, &f, &g);
    printf("Enter A(3,1) A(3,2) A(3,3) :- ");
    scanf("%d %d %d", &h, &i, &j);
    //COPIED: prompting for matrix A ends....
    //COPIED: prompting the users for the collection of matrix B
    printf("Please enter the the data of matrix B \n");
    printf("%s", MATRIXEX);
    printf("Please endeavor to use only space ('_') between each element of the matrix\n");
    //COPIED: a 3x3 matrix consist of 9 elements so this is declaring the 9 elements in variable...
    int A, B, C, E, F, G, H, I, J;
    //COPIED: below here the user is prompted in my own system/way to give me all i need, to fill the declared variables...
    printf("Enter B(1,1) B(1,2) B(1,3) :- ");
    scanf("%d %d %d", &A, &B, &C);
    printf("Enter B(2,1) B(2,2) B(2,3) :- ");
    scanf("%d %d %d", &E, &F, &G);
    printf("Enter B(3,1) B(3,2) B(3,3) :- ");
    scanf("%d %d %d", &H, &I, &J);
    printf("%s", MATRIXEX);
    //COPIED: prompting for matrix B ends....

    //COPIED: inserting the matrix's into the arrays
    int matrix1[3][3] = {
        {a, b, c},
        {e, f, g},
        {h, i, j}
    };

    int matrix2[3][3] = {
        {A, B, C},
        {E, F, G},
        {H, I, J}
    };
    //COPIED: declaring the empty result matrix with 3x3 
    int resultMatrix[3][3];

    //COPIED: calling the matrix multiply function.
    multiplyMatrix(matrix1, matrix2, resultMatrix);
    //COPIED: presentation of matrix output......
    printf("%s", MATRIXEX);
    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("%s", MATRIXEX);
    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    printf("%s", MATRIXEX);
    printf("\nResult Matrix:\n");
    printMatrix(resultMatrix);

    return 0;
}





/*


MATRICULATION NUMBER: ENG200****;
FULLNAME: COMPUTER PROGRAMMER;
SCHOOL: UNIVERSITY OF BENIN;
DEPT.: COMPUTER ENGINEERING;
COURSE CODE: ECP281;








---------POWERED BY----------
-------HAVOCWEB TECH---------

FACEBOOK: HAVOCWEB123
INSTAGRAM: HAVOCWEB123
LINKEDIN: HAVOCWEB123
WHATSAPP: +2349057611681
GITHUB: HAVOCWEB TECH

FOUNDER: IKUOBASE WISDOM EWAENSETIN.


*/