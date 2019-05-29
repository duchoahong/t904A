#include <stdio.h>
#include <math.h>
int isPrime(int m, int n) {
	printf("the prime number between %d and %d:\n", m, n);
	for(int i = m; i <= n; i++) {
		int count = 0;
		for(int j = 2; j <= sqrt(i); j++) {
			if(i % j == 0) {
				count++;
			}
		}if(count == 0) {
			printf("%d\n", i);
		} 
	}
}
int main() {
	int m, n;
	printf("please enter a number:\n");
	do {
		printf("+ m : ");
		scanf("%d", &m);
	} while (m <= 1);
	do {
		printf("+ n : ");
		scanf("%d", &n);
	} while (n < m);
	isPrime(m, n);
	return 0;
}
