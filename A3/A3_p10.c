/*
    CH-230-A
    A3_p6
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
float product(float a, float b){
    float summ = a * b;
    return summ;
}
//return the product of the two float values
void productbyref(float a, float b, float *p){
    *p= (a * b);
}
//add 3 to the 1 float and 11 to the 2float 
void modifybyref(float *a, float *b){
    *a= *a+3;
    *b= *b+11;
}
int main()
{
    float digit1;
    float digit2;
    float ptr1;

    //receive date
    scanf("%f",&digit1);
    scanf("%f",&digit2);

    //show that the first two functions have the same effect
    float result= product(digit1,digit2);
    printf("%f\n",result);

    productbyref(digit1,digit2,&ptr1);
    printf("%f\n",ptr1);

    //the effect of calling modifybyref
    modifybyref(&digit1,&digit2);
    printf("%f %f\n",digit1,digit2);
    return 0;
}