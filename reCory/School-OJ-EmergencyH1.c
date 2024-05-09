// scene:
// Your classmate sent you a problem of Arithmetic Sequence and ask for help.
// He just forgot to change "int" to "long long".
// Try to make an advanced program to solve his asking.
// ﻿
// Task:
// Input an integer between 1 and 10 ^ 9, make a AS with CD is -1.
// Outputting of summation of this AS.
// Running must be finish in 1000 ms and max memory allowed is 256 MiB.

#include <stdio.h>
#include "time.h"

int main(void)
{
	clock_t st_t, ed_t;
	st_t = clock();

	unsigned long long ll_input = 11451419;
	printf("summation of AS in CD = 1: %llu \n", ll_input / 2 * ll_input * ll_input / 2);

	ed_t = clock();
	double times = ed_t - st_t;
	printf("processing takes %f times.", times);
	return 0;
}

// Origin codes:
//
// #include<stdio.h>
// #include<stdlib.h>
//
// int main() {
//		int n;
//		scanf("%d", &n);
//		int sum = 0;
//		for (int i = 0; i <= n; i++) {
//		sum = sum + i;
//		printf("%d", sum);
//		return 0;
//		}
//