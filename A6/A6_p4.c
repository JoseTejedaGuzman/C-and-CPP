/*
    CH-230-A
    A6_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

#define Intermediate
 
int main(){

    int n, product = 0, *array,*array2;

    printf ("Type a number: "); 
    scanf("%d",&n);
    //Allocate 'n' value

    array = (int*) malloc(sizeof(int)* n);
    if (array == NULL) {
        exit(1); }

    array2 = (int*) malloc(sizeof(int)* n);
    if (array2 == NULL) {
        exit(1); }
    //Dynamic memory allocation for both arrays in dependence of 'n'

    for (int i=0;i < n; i++) {
        printf ("Number 1st array: ");
        scanf("%d", &array[i]); }
    
    for (int i=0;i < n; i++) {
        printf ("Number 2nd array: ");
        scanf("%d",&array2[i]); } 
    //Assign values for both arrays 

    for (int i = 0; i < n; i++) {    
        product = product + (array[i]*array2[i]);}
    //Scalar product of the 2 vectors by 'For' loop

    #ifdef Intermediate
    //ONLY if Indermediate is define previously 

    printf("The intermediate product values are:\n");
    for (int i = 0; i < n; i++){
    int intermediate = array[i] * array2[i];
    printf("%d\n", intermediate); } 

    #endif
    //Close the 'If' for Macro

    printf ("The scalar product is: %d\n", product);
 
    free(array);
    free(array2);
    //Deallocating memory

    return 0;
}