/*
    CH-230-A
    A9_p5
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string.h>
using namespace std;
//Calling the libraries

int myfirst (int array []){
//Overloaded function for integers 
    for (int i = 0; 1 < 4; i++){
        //if the integer is bigger than 0 return the integer
        if (array[i] > 0){
            return array [i];
        }
    }
    return -1;
    //If all integer are lees than cero return -1
}

float myfirst (float array []){
//Overloaded function for float numbers
    for (int i = 0; i < 4; i++){
        if ((array[i] < 0) && ((float) array[i] == (int) array[i])){
        //Less than cero and same in the inger form than the float form
            return array [i];
        }
    }
    return -1.1;
    //If float number does not pass the if condition return -1.1
}

char myfirst (string str){

    int size = str. length();
    for (int i = 0; i <= size; i++){
        if ((str [i]>=65 && str[i] <=90)||(str[i] >=97 && str[i] <=122)){
        //To avoid special character we use ASCII code
        
        if ((str [i] != 'a') && (str [i] != 'e') && (str [i] != 'i') && (str [i] != 'o') && (str [i] != 'u')
        && (str [i] != 'A') && (str [i] != 'E') && (str [i] != 'E') && (str [i] != 'O') && (str [i] != 'U')){
            //The first character different than any vowel
            return str [i];
        }
    }
}

    return 0;
}

int main (){

    int array [4] = {-1, -2, 5, 12};  
    float arrayf [4] = {-2.3, -3, 1.4, 5};
    string str = "Apple";
    //Declaration of the arrays and string

    cout << myfirst (array) << endl;
    cout << myfirst (arrayf) << endl;
    cout << myfirst (str) << endl;   
    //Calling the functions

    return 0;
}