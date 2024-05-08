#include  <stdio.h>
#include <stdlib.h>

int main(void)
{
	char first_name[32], last_name[32] = "";
	printf("enter your first name here: ");
	scanf_s("%s", &first_name, (unsigned)_countof(first_name));
	printf("enter your last name here: ");
	scanf_s("%s", &last_name, (unsigned)_countof(last_name));

	printf("your whole name is \"%s %s\"\n", first_name, last_name);
	printf("in 20 width right-end: \"%20s %20s\"\n", first_name, last_name);
	printf("left-side version: \"%-20s %-20s\"\n", first_name, last_name);
	return 0;
}
