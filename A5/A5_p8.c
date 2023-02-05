/*
    CH-230-A
    A5_p8
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void Matrix(int **array, int row_number, int column_num){
//Use the function to read the numbers
    int ix, ixx;
    for (ix = 0; ix < row_number; ix++){
        for (ixx = 0; ixx < column_num; ixx++){
            //Start reading of the columns of the row 'i'
            scanf("%d", &array[ix][ixx]);
            //Allocate the memory
        }
    }
}

void matrix_multiplication (int **array, int **array_2, int **array_3,
 int val1, int val2, int val3, int val4){
    int i, j, k;

    for (i = 0; i < val1; ++i){
        for (j = 0; j < val4; ++j){
            array_3[i][j] = 0;
        //Equalize all the array to 0.
        }
    }

    for (i = 0; i < val1; ++i){
        for (j = 0; j < val4; ++j){
            for (k = 0; k < val3; ++k){
                array_3[i][j] = array_3[i][j] + (array[i][k] * array_2[k][j]);
                //Multiplication based in the formula given
            }
        }
    }
}

void Printing (int **arr, int row_number, int column_num){
    int row;
    int column;
    for (row = 0; row < row_number; row++){
        for (column = 0; column < column_num; column++){
            printf("%d ", arr[row][column]);
            //Print the elements of the array starting for columns
        }
        printf("\n");
        //Once the columns of the row finish, new line
    }
}
int main(){
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    //Allocate the values

    int row = 0, **matrix;
    matrix = (int **)malloc(sizeof(int *) * n);
    //Dinamic memory allocation for multidimensional arrays
    if (matrix == NULL){
        exit(1);
    }
    for (row = 0; row < n; row++){
        matrix[row] = (int *)malloc(sizeof(int) * m);
        //Dinamic memory for elements per row
        if (matrix[row] == NULL)
            exit(1);
    }
     int **matrix2;

    matrix2 = (int **)malloc(sizeof(int *) * m);
    //Dinamic memory allocation for multidimensional arrays
    if (matrix2 == NULL){
        exit(1);
    }
    for (row = 0; row < m; row++){
        matrix2[row] = (int *)malloc(sizeof(int) * p);
        //Creating memory for the rows
        if (matrix2[row] == NULL)
            exit(1);
    }

    int **product_matrix;
    product_matrix = (int **)malloc(sizeof(int *) * n);
    //Creating the memory for the third array 
    if (product_matrix == NULL){
        exit(1);
    }
    for (row = 0; row < n; row++){
        product_matrix[row] = (int *)malloc(sizeof(int) * p);
        if (product_matrix[row] == NULL)
            exit(1);
    }
    Matrix(matrix, n, m);
    Matrix(matrix2, m, p);

    matrix_multiplication(matrix, matrix2, product_matrix, n, m, m, p);

    printf("Matrix A:\n");
    Printing(matrix, n, m);

    printf("Matrix B:\n");
    Printing(matrix2, m, p);

    printf("The multiplication result AxB:\n");
    Printing(product_matrix, n, p);
    //Call the differents functions

    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);
        free(matrix);
    }
    for (int i = 0; i < m; i++)
    {
        free(matrix2[i]);
        free(matrix2);
    }
    for (int i = 0; i < n; i++)
    {
        free(product_matrix[i]);
        free(product_matrix);
    }
    //Deallocating memory 
    return 0;
}