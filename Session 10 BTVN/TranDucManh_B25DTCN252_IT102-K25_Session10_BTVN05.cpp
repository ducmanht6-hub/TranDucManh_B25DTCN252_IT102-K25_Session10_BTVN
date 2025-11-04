#include <stdio.h>

int main() {
    int n, i, value, count = 0;
    int a[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
    	printf("Nhap cac gia tri bat ki trong phan tu mang: ");
        scanf("%d", &a[i]);
    }
    printf("Nhap so can tim và dem trong mang: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            count++;
        }
    }
    if (count > 0){
        printf("So ban tim duoc co so lan xuat hien la: ");
        printf("%d", count);
    }else
        printf("So ban vua nhap khong co trong mang da nhap, vui long thu lai!");
    return 0;
}

