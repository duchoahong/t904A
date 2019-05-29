#include <stdio.h>
#include <math.h>
int isPrime(int a) {
	int count = 0;
	for(int i = 2; i <= sqrt(a); i++) {
		if(a % i == 0) {
			count++;
		}
	}
	if(count == 0) {
		printf("so a: %d la so nguyen to\n", a);
		return 1;
	} else {
		printf("so a: %d khong phai la so nguyen to\n", a);
		return 0;
	}
}
int main() {
	int a;
	printf("please enter a number:\n");
	do {
		printf("+ a : ");
		scanf("%d", &a);
	} while (a <= 1);
	isPrime(a);
	return 0;
}
