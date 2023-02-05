/*
    CH-230-A
    A8_p8
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int counter(char ch){
//Check if the character is equal to one of the cases below
    switch(ch){
        case ' ':
        case ',':
        case '?':
        case '!':
        case '.':
        case '\t':
        case '\r':
        case '\n':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

int main(){

    char name_file[30], content, previous;
    int count = 0;
    FILE* fptr;
    //Creating a pointer file
    previous = '\n';

    fgets(name_file, sizeof(name_file), stdin);
    //Allocating the input
    

    for(int i = 0; i < 30; i++){
        if(name_file[i] == '\n')
            name_file[i] = '\0';}

    fptr = fopen(name_file, "r");
    //Open the file depending of the Input

    while((content = getc(fptr)) != EOF){
        //If counter is equal to 'End of File' loop finishes
        if(counter(content) && !counter(previous))
            count++;
        previous = content;}
   
    printf("The file contains %d words.\n", count);
    fclose(fptr);
    //Closing the file

    return 0;
}