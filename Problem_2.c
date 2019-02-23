/*
 ============================================================================
 Name        : Problem_2.c
 Author      : Jack Malloch
 Version     :
 Copyright   : Your copyright notice
 Description : Project Euler Problem 2 Solution
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ONE 1

void main() {
	int subtermA = 1;
	int subtermB = 0;
	int term = 0;
	int sum = 0;

	while(term < 4000000){
		subtermB = subtermA;
		subtermA = term;
		term = subtermA + subtermB;
		if(term%2 == 0){
			sum += term;
		}
	}
printf("Sum of even Fibonacci numbers under 4 Million is: %d", sum);
}
