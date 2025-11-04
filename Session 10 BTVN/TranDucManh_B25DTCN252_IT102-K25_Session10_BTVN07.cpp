#include <stdio.h>

int main() {
    int n, i, x;
    int a[100];
    int left, right, mid;
    int found = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
    	printf("Nhap cac gia tri bat ki trong phan tu mang: ");
        scanf("%d", &a[i]);
    }
    printf("Nhap gia tri ban muon tim: ");
    scanf("%d", &x);
    left = 0;
    right = n - 1;
    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == x){
        	printf("Gia tri ban nhap nam o phan tu so: ");
            printf("%d", mid); 
            found = 1;
            break;
        }else if (a[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1; 
        }
    }
    if (!found) {
        printf("So ban nhap khong thuoc cac gia tri trong phan tu do, vui long nhap lai!");
    }
    return 0;
}

