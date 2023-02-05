/*
    CH-230-A
    A5_p5
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

double scalar_product(int number, double arr[], double arr2[], double arr3[]){

    double scalar;

    for (int i = 0; i < number; i++){
      arr3[i] = arr[i] * arr2[i];  
      //Multiplication of both vectors
    }

    for (int i = 0; i < number; i++){
        scalar += arr3[i];
    //Sum of the multiplication of both vectors
    }
return scalar;
}

double smallest_number (double arr[], int num){
    int i = 0;
    double smaller;
    smaller = arr[0];
    for (i = 0; i < num; i++){
        //Compare the number and the smaller stay
        if(arr [i] < smaller){
        smaller = arr [i];}
    }

    return smaller;
}

double largest_number (double arr[], int num){
    int i = 0;
    double higher;
    higher = arr[0];
    for (i = 0; i < num; i++){
        //Compare the number and the higher stay
        if(arr [i] > higher){
        higher = arr [i];}
    }

    return higher;
}

int positionL_number (double arr[], int num){
    double number = smallest_number(arr, num);
    //Call the function to know the smallest number of the array
    int i;

    for (i = 0; i < num; i++){
        if (arr [i] == number){
        //When the loop finds the position of the smallest number it breaks
            break;
        }
    }

    return i;
    //'i' is the position of the array when the smallest was found
}

int positionLAR_number (double arr[], int num){
    double number = largest_number(arr, num);
    //Call the function to know the largest number of the array
    int i;

    for (i = 0; i < num; i++){
        if (arr [i] == number){
        //Same as in the smallest position function
            break;
        }
    }

    return i;
}

int main (){

    int n;
    double *v, *w, *z;

    scanf ("%d", &n);
    v = (double*) malloc (sizeof(double)*n);
    w = (double*) malloc (sizeof(double)*n);
    z = (double*) malloc (sizeof(double)*n);
    //Dinamic memory allocation of the arrays depens of the integer 'n'

    for (int i = 0; i < n; i++){
        scanf ("%lf", &v[i]);
        //Allocate each value of the arrar 'v'
    }

    for (int i = 0; i < n; i++){
        scanf ("%lf", &w[i]);
        //Allocate each value of the array 'w'
    }

    printf ("Scalar product=%lf\n", scalar_product(n, v, w, z));
    //Call the scalar product function using the parameter the values
    // 'N', 'V', 'W', 'Z'
    printf ("The smallest = %lf\n", smallest_number(v, n));
    printf ("Position of smallest = %d\n", positionL_number (v, n));
    printf ("The largest = %lf\n", largest_number (v, n));
    printf ("Position of largest = %d\n", positionLAR_number (v, n));
    printf ("The smallest = %lf\n", smallest_number(w, n));
    printf ("Position of smallest = %d\n", positionL_number (w, n));
    printf ("The largest = %lf\n", largest_number (w, n));
    printf ("Position of largest = %d\n", positionLAR_number (w, n));
    //Smallest_number function just change its parameter for array 'v' or 'w'


    return 0;
}