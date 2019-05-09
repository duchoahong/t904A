#include <stdio.h>

// nhap 1 mang gom n ptu voi dk khong trung nhau => sap xep mang theo thu tu tang dan 
int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++) {
        printf("nhap arr[%d] ", i);
        scanf("%d", &arr[i]);
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                printf("\tnhap arr[%d] != arr[%d]\t", i, j);
                i--;
            }
        }
    }
    int tmp, i, j, n = 10;
    for (j=1; j<n; j++) {
        i = j - 1;
        tmp = arr[j];
        while ( (i>=0) && (tmp > arr[i]) ) {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = tmp;
    }
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
return 0;
}
