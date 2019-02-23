/*
 ============================================================================
 Name        : Problem_1.c
 Author      : Jack Malloch
 Version     :
 Copyright   : Your copyright notice
 Description : Project Euler Problem 1 Solution
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
int sum = 0;
	for(int i=3; i<1000; i++){
		if(i%5 == 0 || i%3 ==0){
			sum += i;
		}
	}

	printf("Sum of multiples of 3 & 5 under 1000 = %d", sum);
}
