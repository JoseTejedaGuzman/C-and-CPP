/*
    CH-230-A
    A9_p8
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
//Calling the libraries

void subtract_max (int *array, int num){
//Overloaded function for the max value
    int max = array[0];

    for (int i = 0; i < num; i++){
        //Foor loop to find the maximum value in the array
        if (array[i] > max){
            max = array[i];
        }
    }

    for (int i = 0; i < num; i++){
        //Resting all values of the array by the maximum value
        array [i] = array [i] - max;
    }


}

void deallocate (int *array){
//Function to deallocate the memory
    delete [] array;
}

int main (){

    int n;
    cin >> n;

    int *array = new int[n];
    //Dinamic memory allocation

    for (int i = 0; i < n; i++){
        //Allocating every value
        cout << "Type a number \n";
        cin >> array[i];
    }

    cout << "Array before the function: \n";
    for (int i = 0; i < n; i++){
        cout << array[i] << endl;
        //Printing the values of the array 
    }

    subtract_max (array, n);
    //Calling the function

    cout << "Array after the function: \n";
    for (int i = 0; i < n; i++){
        cout << array[i] << endl;
        //Printing the values after calling the function
    }

    deallocate (array);
    //Deallocating memory


    return 0;
}
