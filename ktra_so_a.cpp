#include <stdio.h>

//btap: nhap 1 mang gom 10 ptu, tim 1 so co xuat hien trong mang hay khong, neu co thi dem so lan xuat hien
int main() {
	int arr[10], n = 10, count = 0;
	//nhap
    for(int i = 0; i < n; i++) {
        printf("nhap arr[%d] ", i);
        scanf("%d", &arr[i]);
    }
    int so_a;
    printf("nhap chu so can kiem tra\t");
    scanf("%d", &so_a);
    for(int i = 0; i < n; i++) {
        if(arr[i] == so_a) {
            count++;
        }
    }
    if(count > 0) {
        printf("chu so: %d, xuat hien %d lan\n", so_a, count);
    }else{
    	printf("can not found an index: %d in array", so_a);
	}
	
return 0;
}
