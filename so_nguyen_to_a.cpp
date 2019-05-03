#include <stdio.h>
#include <math.h>

int main() 
{
//	int k = 0;
//	for(int i = 1; i <= 3; i++) {
//		for(int j = 1; j <= 3; j++) {
//			k++;
//			printf("%d", k);
//		}
//		printf("\n");
//	}

	//nhap 1 so n; tim tat ca cac so nguyen to < n;
	int a, count = 0;
	printf("nhap so a\n");
	scanf("%d", &a);
	if(a < 2) {
		printf("false");
		return 0;
	} else {
		for(int i = 2; i < a; i++) {
			for(int j = 2; j <= sqrt(i); j++) { 
				if(i % j == 0) {
					count++;
				}
			}
			if(count == 0) {
				printf("so %d thuoc [2;%d] la so nguyen to\n", i, a);
			} else {
				count = 0;
			}
		}
	}
}
