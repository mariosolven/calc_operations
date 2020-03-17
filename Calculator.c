#include <stdio.h>
#include <stdlib.h>

int opsum(int a, int b)
{
	int sum;
	sum = a+b;
	return sum;
}

int opsub(int a, int b)
{
	int sub;
	sub = a-b;
	return sub;
}

int opmult(int a, int b)
{
	int mult;
	mult = a*b;
	return mult;
}

int opdiv(int a, int b)
{
	int div;
	div = a/b;
	return div;
}


int main (int argc, char** argv)
{
	int result;
	int a= atoi(argv[1]);
	char* operation= argv[2];
	int b= atoi(argv[3]);
	if (*operation=='+')
	{
		result= opsum(a,b);
		printf("El resultado de la suma es: %d \n", result);
	}
	else {
		if(*operation=='-'){
		result= opsub(a,b);
		printf("El resultado de la resta es: %d \n", result);
					}
		else {
			if(*operation=='x'){
				result= opmult(a,b);
				printf(" El resultado de tu multiplicacion es: %d \n", result);
							}
			 else {
					if(*operation=='/') {
					result= opdiv(a,b);
					printf("El resultado de tu division es: %d \n", result);
									}
					 else {
						printf("Error, solo realizar sum, rest, mult o div. ");
						  }
					}
			}
		}
	return 0;
}
# BasicCalculator
# CalculatorFunctions
# CalculatorFunctions
# calc_operations
