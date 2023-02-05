/*
    CH-230-A
    A9_p4
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
//Calling the libraries

int mycount (int a, int b){
//Overloaded function with integers as parameter
    return b - a;
}

int mycount (char ch, string str){
//Overloaded function with char as parameter
    int count = 0;

    int size = str. length();
    //To know the length of the string
    for (int i = 0; i <= size; i++){
        //If the char is equal to the position [i] of the string
        //count increase by 1
        if (ch == str[i]){
            count++;
        }
    }

    return count;
    //Return the number of occurances
}



int main (){

    int num1 = 7;
    int num2 = 3;
    char ch = 'i';
    string str = "This is a string";

    printf ("Difference of int\n");
    cout << mycount(num1, num2) << endl;

    printf ("Number of occurances of %c\n", ch);
    cout << mycount(ch, str) << endl;
    //Calling overloaded functions with the parameters thay you
    //want to pass

    return 0;
}