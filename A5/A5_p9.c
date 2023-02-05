/*
    CH-230-A
    A5_p8
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int  ***inputmatrix(int a,int b,int c)
{
    int ***matrix=NULL;
    matrix = (int ***)malloc(a * sizeof(int **)); 
    //Dinamic memory allocation for multidimensional arrays (3D)
    if (matrix== NULL)
    {
        exit(1);
    }
    for (int i=0; i<a; i++) 
    {
        matrix[i] = (int **)malloc(b * sizeof(int*));
        //Memory allocation for the rows
        if (matrix[i] == NULL)
        {
        exit(1);
        }
        for (int j = 0; j < b; j++)
        {
            matrix[i][j]= (int*)malloc(c*sizeof(int));
            if (matrix[i][j] == NULL)
            {
                exit(1);
            }
        }
        
    }

    for (int i = 0; i <  a; i++) 
    {
      for (int j = 0; j < b; j++) 
      {
          for (int k = 0; k < c; k++)
          {
              scanf("%d",&(matrix[i][j][k]));
              //Allocating the values in the 3D array
          }  
      }
    }   
    return matrix;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            free(matrix[i][j]);
        }
        free (matrix[i]);
    }
    free (matrix);
    //Deallocating memory
}
void printmatrix(int*** matrix,int a,int b,int c)
{
    for (int k=0; k <c;k++)
    {
        printf("Section %d:\n",k+1);
        for (int i = 0; i < a; i++)
        //Print the values by the for loop
        {
            for (int j = 0; j < b; j++)
            {
                  printf("%d ",matrix[i][j][k]);
            }
            printf("\n");
        }
    }
}
int main()
{
    int a,b,c;
    int ***matrix;
    //Multidimensiona array (3D)
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    //Allocate the integers
    matrix=inputmatrix(a,b,c);
    //Call the function
    printmatrix(matrix,a,b,c);
    //Print the array with the function

    return 0;
}