/*
    CH-230-A
    A5_p7
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){

    char str [100], str2 [100], *str3;
    int n, m;

    fgets (str, sizeof(str), stdin);
    //Allocate the string
    n = strlen (str);
    str [n-1]= '\0';
    //Change the last value '\n' = (New line) for '\0'

    fgets (str2, sizeof(str2), stdin);
    m = strlen (str2);

    str3 = (char*)malloc (sizeof(char)* (m + n));
    //Dinamic memory allocation for the third string depending
    //of the strings' lenghts 
    strcpy (str3, strcat(str, str2));
    //Copy the two strings

    printf ("Result of concatenation: %s", str3);


    return 0;
}