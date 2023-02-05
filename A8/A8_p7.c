/*
    CH-230-A
    A8_p7
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char content;
    
    FILE *fptr, *fptr_merge;
    //Creating two file pointers

    fptr = fopen("text1.txt", "r");
    //Opening the file with the pointer and using 'r' mode string 
    //for reading the file from the begginng
    if(fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);}

    fptr_merge = fopen("merge12.txt", "r");
    //Opening the file with the pointer and using 'r' mode string 
    //for reading the file from the begginng
    if(fptr_merge == NULL){
        printf("Some error occurred!\n");
        exit(1);}

    while(( content = fgetc(fptr)) != EOF )
    //Content moves through the file until End Of File
	      fputc(content, fptr_merge);
          //Adding the content to the merge file
    

    fprintf (fptr, "\n");
    //New line

    fclose(fptr);
    //Close the fptr pointer

    fptr = fopen("text2.txt", "r");
    if(fptr == NULL){
        printf("Some error occurred!\n");
        exit(1);}

    while(( content = fgetc(fptr)) != EOF )
    //Content moves through the file until End Of File
	      fputc(content, fptr_merge);
          //Adding the content to the merge file
    

    fclose(fptr);
    fclose(fptr_merge);
    //Closing both pointers

    return 0;
}