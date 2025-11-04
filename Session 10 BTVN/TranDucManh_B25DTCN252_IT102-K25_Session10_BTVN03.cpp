#include <stdio.h>

int main() {
    int n, x, i, found = 0;
    int a[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
    	printf("Nhap cac gia tri bat ki trong phan tu mang: ");
        scanf("%d", &a[i]);
    }
    printf("Nhap so phan tu can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x){
            printf("So ban dang tim nam o phan tu %d", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("So ban vua nhap khong thuoc trong phan tu do, vui long nhap lai!");
    }
    return 0;
}

