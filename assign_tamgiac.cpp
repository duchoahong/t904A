#include <stdio.h>

int main() 
{
//	int a, b, c, c1, c2, c3;
//	printf("nhap vao ba so a, b, c\n\a");
//	scanf("%d %d %d", &a, &b, &c);
//	c1 = a*a;
//	c2 = b*b;
//	c3 = c*c;
//	if(c1 == c2 + c3){
//		printf("3 so vua nhap la ba canh cua tam giac vuong");
//	}else
//	{
//		if(c2 == c1 + c3) {
//			printf("3 so vua nhap la ba canh cua tam giac vuong");
//		}else
//		
//		{
//			if(c3 == c1 + c2){
//				printf("3 so vua nhap la ba canh cua tam giac vuong");
//			}	
//			else{
//				printf("3 so vua nhap ko fai la ba canh cua tam giac vuong");
//			}
//		}
//	}
	// xd a, b, c co fai 3 canh cua tam giac vuong ko
	int a, b, c, max, side1, side2;
	printf("nhap vao ba so a, b, c");
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if(max < b){
		side1 = max;
		max = b;
	}else{
		side1 = b;
	}
	if(max < c){
		side2 = max;
		max = c;
	}else{
		side2 = c;
	}
	if(max*max == side1*side1 + side2*side2){
		printf("ba so vua nhap la 3 canh cua tam vuong");
	}
	else{
		printf("ba so vua nhap ko fai la 3 canh cua tam vuong");
	}
}
