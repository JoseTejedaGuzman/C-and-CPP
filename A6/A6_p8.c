/*
    CH-230-A
    A6_p8
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct list {
    int info;
    struct list *next; };
    //Defining the structure

struct list *push_back(struct list *my_list, int value) {
    //Function to add the value at the end of the list

    struct list *cursor, *newel;

    cursor = my_list;
    //Pointing to the first element of the list
    newel = (struct list *)malloc(sizeof(struct list));

    if (newel == NULL) {
        printf(" Error allocating memory \n");
        return my_list; }

    newel-> info = value;
    newel-> next = NULL;

    if (my_list == NULL)
        return newel;
    while (cursor-> next != NULL){
        cursor = cursor-> next; }

    cursor-> next = newel;
    return my_list;
    //return the list modified
}


struct list * push_front (struct list * my_list,int value ) {
    //Function to add the value at the beggining of the list

    struct list *newel;
    newel = (struct list *)malloc(sizeof(struct list));

    if (newel == NULL) {
        printf(" Error allocating memory \n");
        return my_list;}

    newel-> info = value;
    newel-> next = my_list;
    return newel;
}

struct list *delete(struct list *my_list) {

    if (my_list==NULL) {
        return my_list; }
    //Deleting the first element of the list

    my_list-> info = 0;
    return my_list-> next;
    //returning to the list  
}

void print_list (struct list * my_list) {

    struct list *ptr;
    for (ptr = my_list; ptr !=NULL; ptr = ptr -> next) {
        printf("%d ", ptr -> info); }

    printf("\n");
 }

void freelist (struct list *my_list) {

    struct list *nextelem;
    while (my_list != NULL) {

        nextelem = my_list-> next;
        free(my_list);
        my_list = nextelem;
    }
}

int main(){

char ch;
int n1, n2;
struct list *my_list=NULL;
do
{
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        scanf("%d", &n1);
        my_list = push_back(my_list, n1);
        break;
    case 'b':
        scanf("%d",&n2);
        my_list = push_front(my_list, n2);
        break;
    case 'r':
        my_list = delete(my_list);
        break;
    case 'p':
        print_list(my_list);
        break;
    case 'q':
        freelist(my_list);
    default:
        break;
    }
    
} while (ch !='q');
//If the character is 'q' the loop is broken
return 0;
}

