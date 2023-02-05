/*
    CH-230-A
    A3_p11
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{ //declaring variables
    // char variables of arrays
    char numb_one [100];
    char numb_two[100];
    char numb_three[100];
    char c;
    char *ptr;
    int length1,length2,compare;

    //read a string from the keyboard
    fgets(numb_one,sizeof(numb_one),stdin);
    fgets(numb_two,sizeof(numb_two),stdin);
    scanf("%s",&c);

    //calculates the length of the initial segment
    numb_one[strcspn(numb_one,"\n")]=0;
    numb_two[strcspn(numb_two,"\n")]=0;

    //takes a string as an argument and returns its length
    length1= strlen(numb_one);
    length2= strlen(numb_two);
    compare= strcmp(numb_one,numb_two);
    ptr = strchr(numb_two,c);

    //print lengths and copied array 2 on three
    printf("length1=%d\n",length1);
    printf("length2=%d\n",length2);

    //concatenation
    printf("concatenation=%s\n",strcat(numb_one , numb_two));
    printf("copy=%s\n",strcpy(numb_three,numb_two));

    //comparation
    if (compare > 0) {
        printf("one is larger than two\n");
    }
    else if (compare < 0) {
        printf("one is smaller than two\n");
    }
    else {
        printf("one is equal to two\n");
    }
    //checking for character in array two.
    if (ptr){
        printf("position=%ld\n",ptr-numb_two);
    }
    else {
        printf("The character is not in the string\n");
    }
    return 0;
}