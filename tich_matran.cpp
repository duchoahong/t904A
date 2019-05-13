#include <stdio.h>

//nhap 2 ma tran 3x4 & 4x3, in ra ket qua phep nhan 2 ma tran nay
int main() {
	int m = 3, n = 4, arr_a[m][n], arr_b[n][m];
//nhap xuat arr_a[3][4]
	printf("nhap vao mang arr_a[%d][%d]\n", m, n);
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("nhap arr_a[%d][%d]\t", i, j);
			scanf("%d", &arr_a[i][j]);
		}
	}
	printf("arr_a co dang:\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", arr_a[i][j]);
		}
		printf("\n");
	}
		printf("\n");
//end
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("nhap vao mang arr_b[%d][%d]\t", n, m);
			scanf("%d", &arr_b[i][j]);
		}
	}
	printf("arr_b co dang:\n");
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr_b[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	
	int arr_tich[m][m];
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
		//tinh C qua 1~ vong lap
			int tong_c = 0;
			for(int k = 0; k < m; k++) {
				for(int h = 0; h < m; h++) {
					tong_c += arr_a[k][h] * arr_b[h][k];
				}
			}
		//end
			printf("%d \t" , tong_c);
			arr_tich[i][j] = tong_c;
		}
	}
		printf("\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr_tich[i][j]);
		}
		printf("\n");
	}
		printf("\n");
printf("ghaha");


return 0;
}
