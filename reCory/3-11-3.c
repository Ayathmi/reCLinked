#include <stdio.h>

int main(void)
{
	float f_input = 0;
	printf("enter a float number here:");
	scanf_s("%f", &f_input);
	printf("fixed-point notate: %f\nexponential notate: %e\np-notate:%a", f_input, f_input, f_input);
	return 0;
}