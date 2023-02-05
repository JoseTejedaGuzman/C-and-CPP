/*
    CH-230-A
    A5_p1
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

void print (char ch, int n){
    for (int i = 0; i < n; i++){
        for (int j = n-i; j > 0; j--){
            //Every time 'i' completes a loop, 'i' increase by 1
            //The value of 'j' will be rest by 'i' until 'j' equal 0
            printf ("%c", ch);
        }
        printf ("\n");
    }
}


int main (){

    int n;
    char ch;

    scanf ("%d", &n);
    //Allocate values
    getchar ();
    scanf ("%c", &ch);

    print (ch, n);
    //Call the function
    return 0;
}