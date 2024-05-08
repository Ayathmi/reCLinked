#include <stdio.h>

int main(void)
{
	int i_input = 0;
	printf("enter a number here:");
	scanf_s("%d", &i_input);
	char c_output = i_input;
	printf("it means %c in ascii.", c_output);
	return 0;
}