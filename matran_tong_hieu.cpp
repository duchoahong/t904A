#include <stdio.h> 

//bt: nhap 2 ma tran m hang & n cot, tinh ma tran tong va ma tran hieu cua 2 ma tran nay
int main() {
	int m, n;
	do {
		printf("nhap so hang cua 2 ma tran\n");
		scanf("%d", &m);
	} while(m <= 0);
	do {
		printf("nhap so cot cua 2 ma tran\n");
		scanf("%d", &n);
	} while(n <= 0);
	int arr_a[m][n], arr_b[m][n];
//nhap xuat ma tran tong
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("nhap arr_a[%d][%d]\t", i, j);
			scanf("%d", &arr_a[i][j]);
		}
	}
	printf("arr_a co dang\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", arr_a[i][j]);
		}
		printf("\n");
	}
//end 
//+nhap xuat ma tran hieu
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("nhap arr_b[%d][%d]\t", i, j);
			scanf("%d", &arr_b[i][j]);
		}
	}
	printf("arr_b co dang\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", arr_b[i][j]);
		}
		printf("\n");
	}
//end 
	int arr_tong[m][n], arr_hieu[m][n];
//tinh toan ma tran tong
	printf("arr_tong cua arr_a + arr_b co dang\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			arr_tong[i][j] = arr_a[i][j] + arr_b[i][j];
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", arr_tong[i][j]);
		}
		printf("\n");
	}
//end
//tinh toan ma tran hieu
	printf("arr_hieu cua arr_a + arr_b co dang\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			arr_hieu[i][j] = arr_a[i][j] - arr_b[i][j];
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", arr_hieu[i][j]);
		}
		printf("\n");
	}
//end
	
	
	
	
	
	
	
	
return 0;
}
