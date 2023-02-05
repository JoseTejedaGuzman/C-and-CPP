/*
    CH-230-A
    A8_p5
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    double double1 , double2;
    double sum, product, division, difference;
    
    FILE *fptr;
    //Creating a pointer file
    fptr = fopen("first_double.txt", "r");
    //Opening the file with the pointer and using 'r' mode string 
    //for reading the file from the begginng

    if(fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);}
    //Closing the file if something is wrong

    fscanf(fptr, "%lf" , &double1);
    //Reading the first element of the file and allocating in 'double1'
    fclose(fptr);
    //Closing the file

    
    fptr = fopen("second_double.txt","r");
    if(fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);}

    fscanf(fptr, "%lf", &double2);
    fclose(fptr);
    //Is the same procedure for the second file

    sum = double1 + double2;
    product = double1 * double2;
    division = double1 / double2;
    difference = double1 - double2;
    //Computing the operation once we know the values

    fptr = fopen("results.txt", "w");
    if(fptr == NULL){
        printf("Some error occurred\n");
        exit (1);}

    fprintf(fptr,"Sum of the doubles: %lf\n", sum);
    fprintf(fptr,"Division of the doubles: %lf\n", division);
    fprintf(fptr,"Product of the doubles: %lf\n", product);
    fprintf(fptr,"Difference of the doubles: %lf\n", difference);
    //Printing in 'results.txt' file
    
    fclose(fptr);
    //Closing the file
    return 0;
}