/*
    CH-230-A
    A4_p7
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

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

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf ("%d ", matrix [i][j]);
        }
        printf ("\n");
    }

    printf ("Under the main diagonal:\n");

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i <= j){
                break;}
            printf ("%d ", matrix [i][j]);
        }
    }
    printf ("\n");

    return 0;
}