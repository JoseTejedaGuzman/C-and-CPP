/* 
    CH-230-A
    A2_p1
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int main (){

    double a = 0;
    double b = 0;
    double sum = 0, difference = 0, square = 0;
    int c, d, suma_int, product, sum_char, product_char;
    char x, y;

    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%d", &c);
    scanf ("%d", &d);
    getchar ();
    scanf ("%c", &x);
    getchar();
    scanf ("%c", &y);

    sum = a + b;
    difference = a - b;
    square = a * a;
    suma_int = c + d;
    product = c * d;
    sum_char = x + y;
    product_char = x * y;

    printf ("sum of doubles=%lf\n", sum);
    printf ("difference of doubles=%lf\n", difference);
    printf ("square=%lf\n", square);
    printf ("sum of integers=%d\n", suma_int);
    printf ("product of integers=%d\n", product);
    printf ("sum of chars=%d\n", sum_char);
    printf ("product of chars=%d\n", product_char);
    printf ("sum of chars=%c\n", sum_char);
    printf ("product of chars=%c\n", product_char);


    return 0;
}