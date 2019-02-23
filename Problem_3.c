/*
 ============================================================================
 Name        : Problem_3.c
 Author      : Jack Malloch
 Version     :
 Copyright   : Your copyright notice
 Description : Project Euler Problem 3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	long long value = 600851475143;
	long newVal = value;
	long LPF = 0;

	int counter = 2;
	while(counter * counter <= newVal){
		if(newVal % counter == 0){
			newVal = newVal / counter;
			LPF = counter;
		} else {
			counter = (counter == 2) ? 3 : counter + 2;
		}
	}
	if(newVal > LPF){
		LPF = newVal;
	}

	printf("Largest prime factor is %llu",LPF);
}
