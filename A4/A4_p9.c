/*
    CH-230-A
    A4_p9
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int prodminmax (int array[], int n){

    int product;
    int i = 0;
    int higher, lower;

    higher = array[0];
    for (i = 0; i < n; i++){
        //Compare the value in the array with one before the higher stay
        if(array [i] > higher){
        higher = array [i];}
    }

    lower = array[0];
    for (i = 0; i < n; i++){
        //Compare the value in the array with one before, the lower stay
        if(array [i] < lower){
        lower = array [i];}
    }

    product = higher * lower;

    return product;
}

int main(){
    int Num, i;
    int *arr;

    scanf ("%d", &Num);
    arr = (int*)malloc(sizeof(int)*Num);
    //Dinamic allocation with malloc

    for (i = 0; i < Num; i++){
        scanf ("%d", &arr[i]);
    }

    printf ("The product is %d",prodminmax(arr, Num));

    free (arr);


    return 0;
}