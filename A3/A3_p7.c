/*
    CH-230-A
    A3_p7
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

void print_form (int n, int m, char c){

    int i, j; //Counters for the loops
    for (j = 0; j < n; j++){
        /*Once the loop below finish, it will print new line and increase 'm'
        by one*/
        for (i = 0; i < m; i++){
        //Print the caracter continuously 'm' times 
        printf ("%c", c);
        }
    printf ("\n");
    m++;
    }
}

int main (){

    int height, base;
    char ch;

    printf ("Type height: ");
    scanf ("%d", &height);

    printf ("Type base: ");
    scanf ("%d", &base);

    printf ("Type letter: ");
    getchar ();
    scanf ("%c", &ch);

    print_form (height, base, ch);
    //Call the void function

    return 0;
}
