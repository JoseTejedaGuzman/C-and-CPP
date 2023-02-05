/*
    CH-230-A
    A9_p9
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <algorithm>
using namespace std;
//Calling the libraries

int main(){
    
    int die,count = 1;
    string word, read;
    string str[] = {"computer","television","keyboard","laptop","mouse","table","chair","glass",
                    "coffe","spoon","keyboard","letter","paper","phone","star","moon","sun"};
    //Declaring the words

    while(1){
        srand(static_cast<unsigned int>(time(0)));
	    die = (rand() % 17);// Pick a word from 1 to 17 randomly

	    word = str[die];
	    
        replace(word.begin(), word.end(), 'a', '_');
        replace(word.begin(), word.end(), 'e', '_');
        replace(word.begin(), word.end(), 'i', '_');
        replace(word.begin(), word.end(), 'o', '_');
        replace(word.begin(), word.end(), 'u', '_');
        //Replacing all the vowels by underscore
	   	
	   	cout<<"Guess the following word: "<< word <<endl;
	   	string insert;
        //Printing the word that was picked randomly
    
    while(1){

        cout << "Type the word you think is correct: ";
        cin>>insert;
        //Attempt to know the word
        if(insert == "quit"){
            break;}
        //Stop the game if 'quit' is the word inserted
        
        if (insert != str[die]){
        //If the word is different from the the random one
        //count increase by 1
            cout<<"Error, try again \n";
            count++;
        }
        else{
            cout<<"Congrats, you got it after "<< count <<" tries "<<endl;
            //If the player guess the game break
            break;}
    }

   
    cout << "Do you want play again? Type 'yes' if so or 'quit' if not: ";
    //Options the player have
    A:
    //to know the specific location
    cin >> read;
    //Read the word again
    
    if(read != "yes" && read!= "quit"){
        //If the player insert something different repeat
        cout<<"non-valid, re enter please: ";
        goto A;
        }
    else if(read =="quit"){
        break;
        }
    }
    return 0;
}