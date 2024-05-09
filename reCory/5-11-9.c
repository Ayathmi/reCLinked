#include <stdio.h>

void temperature(double in_fahrenheit);

int main(void)
{
	double fahrenheit = 0;
	while (1)
	{
		printf("enter a fahrenheit degree here: ");
		int match_times = scanf_s("%lf", &fahrenheit);
		if (fahrenheit > 0 && match_times == 1)
		{
			temperature(fahrenheit);
		}
		else
		{
			break;
		}
	}
	printf("processing had done.\n");	
	return 0;
}

void temperature(double in_fahrenheit)
{
	double c = 5.0 / 9.0 * (in_fahrenheit - 32.0);
	double k = c + 273.15;

	printf("your inputted fahrenheit in celsius is: %.2f\n", c);
	printf("kelvin version also: %.2f\n", k);
}