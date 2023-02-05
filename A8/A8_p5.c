/*
    CH-230-A
    A8_p5
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char string[2];
    //Creating a string to use only 2 characters
    
    FILE *fptr;
    //Pointer of file
    fptr = fopen("chars.txt", "r");
    //Opening the file with the pointer and using 'r' mode string 
    //for reading the file from the begginng

    if (fptr == NULL){
    //Closing the file if something is wrong
        printf("Some error occurred!\n");
        exit(1);}
    
    for(int i = 0; i <= 1; i++){
    string[i] = getc (fptr);}
    //Reading only 2 elements of the file 'chars.txt'

    fclose(fptr);
    //Closing the file which fptr is pointing to
    
    fptr = fopen("codesum.txt","w");
    //Opening a new file
    if(fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);}
    
    fprintf(fptr,"Sum of the chars in ASCII code: %d", (string[0] + string[1]));
    //Printing only 

    fclose(fptr);
    //Closing the file

    return 0;
}