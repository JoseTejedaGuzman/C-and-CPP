/*
    CH-230-A
    A3_p9
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n){
    double result;
    if ((n > 3 && n < 6) || (n <= 3)){
        result = -111;}
        
    else
        result = v[2] + v[5];
    return result;
}


int main() {
    double v[20];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%lf", &v[i]);}

    if (sum25(v, n) == -111)
        printf("One or both positions are invalid\n");
    else
        printf("sum=%lf\n", sum25(v, n));
    return 0;
}

