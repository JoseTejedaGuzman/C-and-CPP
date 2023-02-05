/*
    CH-230-A
    A7_p2
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct list {
    char info;
    struct list *next;
    struct list *previous; };
    //Defining the structure with two pointers

struct list * push_front (struct list * my_list, char value ) {
    //Function to add the value at the beggining of the list

    struct list *elem;
    elem = (struct list *)malloc(sizeof(struct list));
    //Dinamic memory allocation of pointer 

    if (elem == NULL) {
        printf(" Error allocating memory \n");
        return my_list;}

    elem -> previous = NULL;
    elem -> info = value;
    elem -> next = my_list;
    //Asigning values for the pointer

    if (my_list == NULL){
        return elem;}
    else{
    my_list -> previous = elem;
    //Adding the element
        return elem;}
}

struct list * delete (struct list* my_list, char value){

	int i = 0;
	struct list *previous = NULL, *next = NULL, *ptr;
	ptr = my_list;
	if(my_list == NULL)
		return my_list;
	while(ptr){

		previous = ptr-> previous;
		next = ptr-> next;
		if(previous == NULL && (ptr-> info == value)){
            //'If' structure for the first value of the list

			next -> previous = NULL;
			ptr-> next = NULL;
			ptr = next;
			my_list = next;
			i++;
			continue;}

		if(next == NULL && ptr-> info == value){
            //'If' structure for the Last value
			previous -> next = NULL;
			ptr-> previous = NULL;
			i++;
			break;}

		if(ptr ->info == value){
            //'If' for other cases
			previous->next = next;
			next->previous = previous;
			ptr = next;
			i++;
			continue;}

		ptr = ptr -> next;}

	if(i==0)
		printf("%s\n", "The element is not in the list!");
	return my_list;
}

void print_list (struct list * my_list) {

    struct list *ptr;
    for (ptr = my_list; ptr != NULL; ptr = ptr -> next) {
        //Moving through the list with next pointer
        printf("%c ", ptr -> info); }

    printf("\n");
 }

void freelist (struct list *my_list) {

    struct list *ptr;
    while (my_list != NULL){

        ptr = my_list-> next;
        free(my_list);
        my_list = ptr;
        //Deallocate the list
    }
}

void reverse (struct list *my_list) {

	struct list *ptr;
	for(ptr = my_list; ptr; ptr = ptr-> next){
		if(ptr->next == NULL)
    //We do not use the 'next' pointer to move through the list
			break;
	}
	for(; ptr; ptr = ptr->previous)
    //Use 'previous' pointer to move through the list
		printf("%c ", ptr-> info);
	printf("\n");
}


int main(){

char ch, ch2;
int num;
struct list *my_list = NULL;
// Calling the struct 'list' and declaring a pointer
do
{
    scanf("%d", &num);
    getchar ();
    //Getchar for the next character
    switch (num)
    {
    case 1:
        scanf("%c", &ch);
        my_list = push_front(my_list, ch);
        break;
    case 2:
        scanf ("%c", &ch2);
        my_list = delete(my_list, ch2);
        break;
    case 3:
        print_list(my_list);
        break;
    case 4:
        reverse (my_list);
        break;
    case 5:
        freelist(my_list);
        break;
    }
    
} while (num != 5);
//If the number is '5' the loop is broken
return 0;
}
