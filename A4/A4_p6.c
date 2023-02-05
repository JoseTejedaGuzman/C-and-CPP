/*
    CH-230-A
    A4_p6
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
// 
void greatTwo(int str[], int ix){
    int x, y, c=0, d;
    x= str[0];
    y= str[1];
    //check the two biggest numbers
    if (x<y){
        x=y;
        y=c;
        c=x;
    }
    for(d=0; d<ix; d++){
        if (str[d]>x){
            y=x;
            x= str[d];
        }
        else if(str[d]>y){
            y= str[d];
        }
    }
    printf("The two greatest numbers are the following: %d and %d\n",x,y);
    //Print the largest number 
}
int main(){
    int *value, p, id;
    printf("Write the number of array:");
    scanf("%d",&p);

    value=(int*) malloc(sizeof(int)*p);
    //Make dinamic memory allocation
    if (value==NULL) {
    exit(1);
}
for (id=0; id<p; id++) {
        printf("Enter a[%d]:", id+1);
        scanf("%d",&value[id]);
        getchar();
}
    greatTwo(value,p);
    free(value);
    return 0;
}
