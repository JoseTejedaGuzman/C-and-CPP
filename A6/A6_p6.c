/*
    CH-230-A
    A6_p6
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void binary (unsigned char n){

    int binary;

    for (int i = 7; i >= 0 ; i--){   
    // 'i' = 7 because binary representation of an unsigned char is on 8 bits
    binary = n >> (i);
    // Use of bitwise operator to move through the binary representation
        if ( binary & 1){
            // Using bit mask to identify bits
            printf("1") ;}
        else{
            printf("0") ;}
    } 
}

int main(){
    
    unsigned char ch;
    //Define the unsigned character

    scanf("%c",&ch);
    printf("The decimal representation is: %d\n",ch);
    printf("The binary representation is: ");

    binary (ch);
    //Calling the function

    return 0;
}