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

int main (){

    string name;
    int  die, number, tries = 1;
    int  randomNumber;

    printf ("Plase, type your name: ");
    getline (cin, name);
    //Allocate the string input with getline function

    srand(static_cast <unsigned int >(time (0)));
    randomNumber = rand();
    die = (randomNumber % 100) + 1;
    //Making a random number with 'time' function and 'srand'

    printf ("Guess the number between 1 and 100: ");
    cin >> number;
    //First guessing of the player

    while (number != die){
        //While the input number is different from the random number we
        //created previuosly, loop keeps on

        if (number < die){
            cout << "Pick a higher number than " << number <<endl;}
            //If number is lower than the random one

        if (number > die){
            cout << "Pick a lower number than " << number << endl;}
            //If number is higher than random one

        printf ("Guess the number: ");
        cin >> number;
        //Next guess of the player

        tries ++;
        cout << "Number of tries: " << tries << endl;
        //Number of tries increase by 1

    }

    cout << "Congrats: " << name << " You won!!!" << endl;
    //Once the player won the message appear

    return  0;}
