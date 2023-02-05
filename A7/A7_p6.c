/*
    CH-230-A
    A7_p6
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person {
    char name[30];
    int age;
};


int compare_age (struct person X,struct person Y){
//Comparing the age of the people
  if (X.age>Y.age) {
    return 1;}

  else if (X.age==Y.age) {
    if (strcmp(X.name,Y.name)>0) {
      return 1;}

    else {
      return 0; }
  }

  else {
    return 0; }
}


int compare_names(struct person X, struct person Y){
//Comparing the names of the people

  if (strcmp(X.name,Y.name)>0) {
    return 1; }

  else if (strcmp(X.name,Y.name)==0){
    if (X.age>Y.age) {
    return 1; }

    else {
    return 0;}
  }

  else{
    return 0;}

}

void bublesort(struct person *ptr,int num, int (*func)(struct person, struct person)){
//bublesort algorithm

    char string[40]; 
    int swapped = 1 , counter;
    
    while(swapped){
        swapped=0;
        for(int i = 0; i < num-1; i++){
            if(func(ptr[i],ptr[i+1])){

                strcpy(string,ptr[i].name);
                strcpy(ptr[i].name,ptr[i+1].name);
                strcpy(ptr[i+1].name, string);

                counter =ptr[i].age;
                ptr[i].age=ptr[i+1].age;
                ptr[i+1].age= counter;
                swapped=1;
            }
        }
        num--;
    }
}


void print(struct person *ptr ,int n){
//Printing function
    int i;
    for(i=0; i<n; i++){
        printf("{%s, %d}; ",(ptr [i].name),(ptr [i].age));
    }
    printf("\n");
}

struct person(*func)(struct person, struct person);

int main(){
    
    int num;
    scanf("%d",&num);
    //Number of persons to compare

    struct person list[num];

    for(int i = 0; i < num; i++){
        scanf("%s",list[i].name);
        scanf("%d",&list[i].age);
    }
    bublesort(list,num, compare_names);
    //Calling the bublesort 
    print(list,num);

    bublesort(list,num, compare_age);
    print(list,num);

    return 0;
}