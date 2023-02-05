/*
    CH-230-A
    A7_p4
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void lower (char *string){
//Turn the characters into lowercase through 'For' loop
//ASCII code and tolower 
    for (int i=0; i < strlen(string); i++){
        if (string[i] <= 90 && string[i] >= 65){

            printf("%c",tolower(string[i])); }
        else {
            printf("%c",string[i]); }
        
    }
}

void Upper(char *string){
//Turn the characters into lowercase through 'For' loop
//ASCII code and toupper

    for (int i=0; i < strlen(string); i++){
        if (string[i] <= 122 && string[i] >= 97){

            printf("%c",toupper(string[i])); }
        else {
            printf("%c",string[i]); }
        
    }
    
}

void change (char string[100]){
//Change the values in lowercase or upper case depending of
// the original form
    for (int i=0; i< strlen(string); i++){
        if (string[i]<='Z' && string[i]>='A'){
            printf("%c", tolower(string[i]));
        }
        else if (string[i]<='z' && string[i]>='a'){
            printf("%c", toupper(string[i]));
        }
        else{
            printf("%c",string[i]);
        }
    }  
}

void end (char *string){
    exit(1);
//Stop the program
}

int main(){   

    char string[75];
    int num;

    fgets(string, sizeof(string), stdin);

    void (*func[4])(char*)= {
        Upper, lower, change, end};
    
    func[0]= Upper;
    func[1]= lower;
    func[2]= change;
    func[3]= end;

    while (1){
    //endless loop
        scanf("%d", &num);
        (func[num-1])(string);}

    return 0;
}