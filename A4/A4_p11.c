/*
    CH-230-A
    A4_p10
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int count_insensitive(char *str, char c){

int count_char=0;
   for (int i = 0; i < strlen(str); i++)
    {
        if (tolower(c) == tolower(*(str+i)))
        //The character would be changed to a lower case
        {
        count_char = count_char + 1;
        }
    }
return count_char;
}
    

int main (){

    char *arr;
    int n;
    char *temp= malloc(50 *sizeof(char));
    //Dinamic Allocation with malloc function
    if (temp== NULL ){
        exit(1);
    }
    fgets(temp,50,stdin);
    //Allocate
    n=strlen(temp);
    arr= (char*) malloc (sizeof(char) * n);
    //Create dinamic allocation in the second array
    if (arr == NULL){
        exit(1);
    }
    strcpy(arr,temp);
    free(temp);
    //Free the memory

    printf("The character 'b' appear %d times\n",count_insensitive(arr,'b')); 
    printf("The character 'H' appear %d times\n",count_insensitive(arr,'H'));
    printf("The character '8' appear %d times\n",count_insensitive(arr,'8'));
    printf("The character 'u' appear %d times\n",count_insensitive(arr,'u'));
    printf("The character '$' appear %d times\n",count_insensitive(arr,'$'));
    printf("%s",arr);

    return 0;
}