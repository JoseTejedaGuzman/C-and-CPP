/*
    CH-230-A
    A6_p7
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binary(unsigned char n){
    
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
        printf("\n");
}


unsigned char set3bit(unsigned char n, int bit, int bit2, int bit3){
    n = n | (char)pow(2, bit);
    n = n | (char)pow(2, bit2);
    n = n | (char)pow(2, bit3);
    //Using bitwise OR '|' to know the values that would be setting later
    return n;
}

int main(){

    unsigned char ch;
    //Define the character as unsigned
    int bit = 0, bit2 = 0, bit3 = 0;
    
    scanf("%c", &ch);
    scanf("%d", &bit);
    scanf("%d", &bit2);
    scanf("%d", &bit3);
    //Allocating each element

    printf("The decimal representation is: %d\n", ch);
    printf("The binary representation is: ");

    binary(ch);
    //calling the function to know the binary representation

    printf("After setting the bits: ");

    binary(set3bit(ch ,bit ,bit2, bit3));
    //Calling the function 'Binary' with the parameters of 'set3bit' 
    //to set the values to 1

    return 0;
}