/*
    CH-230-A
    A4_p10
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float* prod, float* div, float* pwr, float* invb);
int main()
{
//Declaring Variables
	float a, b, prod, div, pwr, invb;
	scanf("%f\n%f", &a, &b);
	//Naming Function
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
	printf("multiplication of a and b=%f\n", prod);
	printf("division a and b=%f\n", div);
	printf("a to the power of b=%f\n", pwr);
	printf("inverse of b=%f\n", invb);

	return 0;
}
void proddivpowinv(float a, float b, float* prod, float* div, float* pwr, float* invb)
{
    //References the value 
	*prod = a * b;
	*div = a / b;
	*pwr = pow(a, b);
	*invb = 1 / b;

}
