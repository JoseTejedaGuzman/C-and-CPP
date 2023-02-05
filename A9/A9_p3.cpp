/*
    CH-230-A
    A9_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
//Calling the libraries

float abso(float absolute){
//Function with float parameter

    if (absolute < 0){
    //If the value less than cero we multiply by -1
        absolute = absolute * -1;
        return absolute;}
    else {
        return absolute;
    }

}

int main (){

    float num;
    cin >> num;
    //Initialising the float value

    cout << abso(num) << endl;
    //Printing the return value of the abs function

    return 0;
}
