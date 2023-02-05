/*
    CH-230-A
    A3_p4
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de

    It prints 0 because the structure 'for' is ignore
    by the pogram due to a missing semi-colon in line 15
    Since 'for' is looking for the position of 'g'
    If the structure is ignore, pogram will print idx (0) 
    because it is the return value
*/

#include<stdio.h>

int position (char str [], char c){
    int idx;
    for (idx = 0; str [idx] != c && str [idx] != '\0'; ++idx); //Semicolon
    return idx;
}


int main (){

    char line [80];
        printf ("Enter string:\n");
        fgets (line, sizeof (line), stdin);
        printf ("The first occurence of 'g' is: %d\n", position(line, 'g'));
    return 0;
} 
