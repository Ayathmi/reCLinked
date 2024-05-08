#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char f_name[32], l_name[32] = "";
	printf("enter your first name here: ");
	scanf_s("%s", f_name, (unsigned)_countof(f_name));
	printf("enter your last name here: ");
	scanf_s("%s", l_name, (unsigned)_countof(l_name));

	int lf_name = (int)strlen(f_name);
	int ll_name = (int)strlen(l_name);
	printf("left-end name listed:\n");
	printf("%s %s\n", f_name, l_name);
	printf("%-*d %-*d\n", lf_name, lf_name, ll_name, ll_name);
	printf("right-end name listed:\n");
	printf("%s %s\n", f_name, l_name);
	printf("%*d %*d\n", lf_name, lf_name, ll_name, ll_name);

	return 0;
}