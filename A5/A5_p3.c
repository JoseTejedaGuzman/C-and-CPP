/*
    CH-230-A
    A5_p2
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int count_lower(char* str){

    int number_lower = 0;
    char *ptr;
    //Declares and initialize the pointer
    ptr = &str[0];

    for (int i = 0; i < strlen(str); i++){
        if ((*(ptr + i)>='a') && (*(ptr + i)<='z')){
    //Use pointer arithmetic to walk through the srting
    //Every time a loop is finished the pointer goes forward 'i' spaces
            number_lower++;
        }
    }

    return number_lower;
}

int main (){

    char array [50];

    while (1){
        fgets (array, sizeof(array), stdin);
        if (array [0] == '\n')
        //If the first element of the string is 'New line' finish the code
        break;
        printf ("Number of lowercase=%d\n", count_lower (array));
        //Call the function
    }

    return 0;
}