/*
    CH-230-A
    A5_p7
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int prime_number (int number, int n){

   if(n ==1){
        return 1;}
    else{
       if(number % n ==0){
    //If the value is divided by any number and the remainder is
    //0, the function finishes returning 0
         return 0;}
       else{
        return prime_number(number,n-1);}
    }

}

int main (){

    int x, result;

    scanf ("%d", &x);
    if(x == 1){
    //Before call the function for the case of 1
        result = 0;}
    else{
        result=prime_number(x,x-1);}
    //Call the function with the input value
    if (result == 1){
    //If the return of the function is 1, the number is prime
        printf("%d is prime\n",x);}
    else{
        printf("%d is not prime\n",x);}

    return 0;
}