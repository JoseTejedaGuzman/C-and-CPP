/*
    CH-230-A
    A4_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

float sum (float arr[], int num){
    double sum;
    int i = 0;
    for (i = 0; i < num; i++){
        //Every loop a number is sum to the Total
        sum += arr [i];
    }

        return sum;
}

float lowest_number (float arr[], int num){
    int i = 0;
    float lower;
    lower = arr[0];
    for (i = 0; i < num; i++){
        //Compare the actual number with one before and the lower stay
        if(arr [i] < lower){
        lower = arr [i];}
    }

    return lower;
}

float geometric_mean (float arr[], int num){
    float multiplication = 1, mean;
    int i = 0;

    for (i = 0; i < num; i++){
        multiplication= multiplication * arr [i];
        //Multiply the first number with the following one
    }

    mean = powf (multiplication, 1/(float)num);
    //Once you get the Total multiplication you sustitute the square root
    //with the powf
    return mean;
}

float highest_number (float arr[], int num){
    int i = 0;
    float higher;
    higher = arr[0];
    for (i = 0; i < num; i++){
        //Compare the number and the higher stay
        if(arr [i] > higher){
        higher = arr [i];}
    }

    return higher;
}

int main (){

    float array [15];
    int i, n=1;
    char ch;


    for (i = 0; i < 15;i++){
        //Allocate the number in the array
        printf ("Type a number: ");
        scanf ("%f", &array[i]);
        if (array[i] < 0){
            n = i;
            break;}
    }

    printf ("Type a letter: ");
    getchar();
    scanf ("%c", &ch);

    switch (ch){
        //Call each function
        case 'm':
        printf ("Geometric mean: %f", geometric_mean (array, n));
        break;

        case 'h':
        printf ("Highest number: %f", highest_number (array, n));
        break;

        case 'l':
        printf ("Lowest number: %f", lowest_number (array, n));
        break;

        case 's':
        printf ("Sum of the numbers: %lf", sum (array, (n-1)));
        break;

    }

    return 0;
}