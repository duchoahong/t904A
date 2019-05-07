#include <stdio.h>
#include <math.h>
#define MAX 50

int main() {
	int arr[MAX];
	for(int i = 0; i <= 9; i++) {
		printf("nhap phan tu arr[%d]", i);
		scanf("%d", &arr[i]);
	}
	int max = arr[0], min = arr[0];
	printf("mang vua nhap gom: ");
	for(int j = 0; j <= 9; j++) {
		printf("%d ", arr[j]);
		if(max < arr[j]) {
			max = arr[j];
		} if (min > arr[j]) {
			min = arr[j];
		}
	}
	printf("\n max = %d,\t min = %d.", max, min);
}
