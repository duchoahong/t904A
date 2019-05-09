#include <stdio.h>
#define MAX 10
//bt1: tim gtTB cua 1 mang gom 10 ptu duoc nhap tu ban phim;
int main() {
	int arr[MAX];
	float tong = 0;
	for(int i = 0; i < 10; i++) {
		printf("nhap arr[%d]", i);
		scanf("%d", &arr[i]);
		tong += arr[i];
	}
	printf("mang vua nhap gom: ");
	for(int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	float tb = tong/10;
	printf("gia tri tb = %0.2f", tb);
}
