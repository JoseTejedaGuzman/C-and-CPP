/*
    CH-230-A
    A6_p2
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

#define LEAST(C) ((C & 1)==0 ? 0 : 1)
//Creating the Macro

int main(){
    unsigned char ch;
    //Define the character as 'Unsigned'

    printf ("Type a character: ");
    scanf("%c",&ch);

    printf("The decimal representation is: %d\n",ch);
    printf("The least significant bit is: %d\n",LEAST(ch));
    //Call the Macro inside the 'printf' function

    return 0;
}