/*
    CH-230-A
    A4_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>



int count_consonants(char str[]){

    int i, vowels=0, Total_letter=0;

    for (i = 0; i < strlen(str); i++){
        switch (str[i]){
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            vowels++;

        }
        if ((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
        Total_letter++;
        }
    }
    int consonants = Total_letter - vowels;
    return consonants;
}

int main (){
    char str_empty [100];
    
    while (1){
        fgets (str_empty, sizeof(str_empty), stdin);
        if (str_empty [0] == '\n')
        break;
        printf ("Number of consonants=%d\n", count_consonants (str_empty));
    }

    return 0;
}