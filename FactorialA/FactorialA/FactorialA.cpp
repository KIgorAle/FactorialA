// FactorialA.cpp: определяет точку входа для консольного приложения.
//

#include <stdio.h>

int factorial_0To12_Rec(int number)
{
	int result;
	if (number == 0) result = 1;
	else
		result = number * factorial_0To12_Rec(number - 1);
	return result;

}

void factorial_13To20(int number)
{
	double result=1;
	if (number > 0) for (int i = 1; i <= number; i++) result = result*i;
	printf("Rezultat: %.0lf\n", result);
}

int main(void)
{
	int number;
	printf("Vvedite celoe chislo ot 0 do 20\n");

	scanf("%d", &number);

	printf("Vi vveli: %d\n", number);

	if (number <= 12) printf("Rezultat: %d\n", factorial_0To12_Rec(number));
	else
		if (number <= 20) factorial_13To20(number);

	scanf("%d", &number); //чтобы консоль не закрывалась

						  //int до 12 (479 001 600), да и unsigned long int (%lu) тоже, 6 227 020 800>4 294 967 295

	return 0;
}

