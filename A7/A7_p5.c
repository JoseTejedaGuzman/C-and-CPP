/*
    CH-230-A
    A7_p4
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int des (const void *number, const void *number2){
//Comparing the numbers in descending form
	const int* a = (const int*) number;
	const int* b = (const int*) number2;
	if(*a > *b) return -1;
	else if(*a < *b) return 1;
	else return 0;
}

int asc (const void *number, const void *number2){
//Comparing the numbers in ascending form
	const int* a = (const int*) number;
	const int* b = (const int*) number2;
	if(*a < *b) return -1;
	else if(*a > *b) return 1;
	else return 0;
}

void print(int *array,int value, int(*func)(const void *number,const void *number2)){
    //Print the array with the qsort() function

    qsort(array,value,sizeof(array[0]),func);
    for(int i=0; i< value; i++){
        printf("%d ",array[i]);
    }
    printf("\n");

}

int (*func)(const void *number, const void *number2);

int main(){

    int value, *array;
    char ch;
    scanf("%d",&value);

    array = (int*)malloc(sizeof(int)*value);
    //Dinamic memory allocation
    if (array == NULL) {
        exit(1); }

    for(int i = 0; i < value; i++){
        scanf("%d",&array[i]);}


    while(1){
        scanf("%c",&ch);

    switch(ch){
        case 'a':
            print(array,value,asc);
            break;

        case 'd':
            print(array,value,des);
            break;

        case 'e':
            exit(1);
            break;
    }
}
    return 0;
}