/*
    CH-230-A
    A9_p2
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
//Calling the libraries

int main (){

    int n;
    double x;
    string s;
    //Initialiting the variables

    cin >> n;
    cin >> x;
    getchar ();
    getline (cin, s);
    //Reading an integer, double and string from the standart input

    printf ("Based in your input:\n");
    //Use printf to make the code more friendly

    for (int i = 0; i < n; i++){
        cout << s << ':' ;
        //After the string ':' character would be printed
        cout << x << endl;}
        //After the double a new line

    return 0;
}