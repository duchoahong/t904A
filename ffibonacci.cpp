#include <stdio.h>

int main() {
//btap1: nhap 1 so, kiem tra no co phai so hoan hao k?
// so bang tong cac uoc thuc su cua chinh no la so hoan hao
// 6, 28, 496, 8128

	int a, sum;
	printf("nhap 1 so a bat ky\n");
	scanf("%d", &a);
	for(int i = 1; i < a; i++) {
		if(a % i == 0) {
			sum += i;
		}				
	}
	if(a == sum) {
		printf("so %d la so hoan hao", a);
	} else {
		printf("so %d khong phai so hoan hao", a);
	}
	
	
//btap2: tim so thu 100 trong day so fibonaci;
	double x = 0, y = 1, z = 0;
	printf("1-> %d \t\n2-> %d \t\n", 1, 2);
	for(int i = 3; i <= 100; i++) {
		z = x + y;
		printf("%d-> %0.2lf \t\n", i, z);
		x = y;
		y = z;
	}
}
