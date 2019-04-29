#include <conio.h>
#include <stdio.h>
#include <math.h>

//1. Tinh tong 100 so le > 0 dau tien  ;
//2. Nhap 1 so tu ban phim, tim cac uoc cua so nay ;
//3. Nhap 1 so tu ban phim, kiem tra xem no co phai so nguyen to hay ko? ;

int main()
{
//bt 1:
//	int s, i;
//	s = 0;
//	for( i = 1; i <= 100; i++) {
//		if(i % 2 != 0) {
//			s = s + i;
//			printf("so i: %d\n", i);
//		}
//	}
//	printf("tong cac so le tu 0->100 = %d", s);

//bt2:
//	int a, i;
//	printf("nhap vao so a\n");
//	scanf("%d", &a);
//	if( a >= 1) {
//		for (i = 1; i <= a; i ++) {
//			if(a % i == 0 ) {
//				printf("uoc cua %d la: %d & %d\n", a, -1*i, i);
//			}
//		}
//	} else {
//		printf("vui long nhap a >= 1");
//	}
	
//bt3:
	int a, i, count = 0;
	printf("nhap vao so a\n");
	scanf("%d", &a);
	if(a < 2) {
		printf("%d khong phai so nguyen to\n", a);
		return 0;
	}
	for(i = 2; i <= sqrt(a); i++) {
		if(a % i == 0) {
			count++;
		}
	}
	if(count == 0) {
		printf("%d la so nguyen to\n", a);
	}else {
		printf("%d khong phai la so nguyen to\n", a);
	}
	
	
	
	
	
	
	return 0;
}
