/*
    CH-230-A
    A6_p5
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned int Binary(unsigned int number);
#define CHAR(A) (A&1)
//Defining the Macro which finds the least significant character


int main(){
    unsigned char ch;
    //Define the character as unsigned
    int backwards, x;

    scanf("%c", &ch);

    printf("The decimal representation is: %d\n", ch);
    printf("The backwards binary representation is: ");
    //prints decimal and backward binary representation of the binary

    for (x=0; x< Binary(ch); x++){
    //Binary representation 
    //Use 'For' loop that prints the reverse binary num
        backwards = ch >> x;
        printf("%d", CHAR(backwards));
    }
    printf("\n");

return 0;

}

unsigned int Binary(unsigned int number){
    //Counting bits 
    int counting;
    for ( counting= 0; (1<<counting) <= number; counting++){}
    return counting;
}


