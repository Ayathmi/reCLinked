#include <stdio.h>

#define NAME "yuki"
#define VARI 233.666

int main(void)
{
	const char name[32] = "ayu";
	const float f_vari = 114.514;
	printf("The %s Team just may be %f score in ahead!\n", NAME, VARI);
	printf("The %s Team had got %f score totally!\n", name, f_vari);

	printf("The %s Team just may be %.3f score in ahead!\n", NAME, VARI);
	printf("The %s Team had got %.3f score totally!\n", name, f_vari);
	return 0;
}