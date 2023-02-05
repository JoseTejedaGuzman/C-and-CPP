/*
    CH-230-A
    A5_p6
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>


int counter(float *ptr){
//count the values with pointer

    int x=0;

    while(1){
        if (*(ptr+x)>0){
            //If the value is bigger the structure still
            //Arithmetic pointer
            x++;}
    else {
        break;}
    }
    return x;
}

int main(){
    int n, ixi;
    printf("Enter the number of values:\n");
    scanf("%d", &n);
    float *ptr;

    ptr= (float*)malloc(sizeof(float)*n);
    //Dinamic memory allocation depending of 'n'

    for(ixi=0; ixi<n; ixi++){
        scanf("%f", ptr+ixi);
    //Allocate the values with the pointer
    }

    printf("Before the first negative value: %d elements\n", counter(ptr));
    // return the number of non-negative values
    return 0;
}

