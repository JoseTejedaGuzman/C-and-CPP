/*
    CH-230-A
    A4_p8
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

void printing (int mat [30][30], int num){
    //Void funtion because does not return a value just print
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            printf ("%d ", mat [i][j]);
        }
        printf ("\n");
    }
}

void printing2 (int mat2 [30][30], int num2){

    for (int i = 0; i < num2; i++){
        for (int j = 0; j < num2; j++){
            if ((i+j) >= num2){
            printf ("%d ", mat2 [i][j]);}
            //For loop to compare every number inside the array
            //if the sum is less than the number typed does not print
        }
    }
    printf ("\n");

}

int main (){

    int matrix [30][30];
    int n, i, j;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf ("%d", &matrix [i][j]);
        }
    }

    printf ("The entered matrix is:\n");
    //Just call the function
    printing (matrix, n);


    printf ("Under the secondary diagonal:\n");
    printing2 (matrix, n);

    return 0;
}
