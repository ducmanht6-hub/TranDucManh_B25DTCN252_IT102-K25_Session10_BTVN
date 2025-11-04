#include <stdio.h>

int main() {
    int n, i, j, temp, value;
    int a[100];
    int left, right, mid;
    int found = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    	printf("Nhap cac gia tri cua phan tu: ");
        scanf("%d", &a[i]);
    }
    printf("Nhap gia tri ban can tim trong phan tu: ");
    scanf("%d", &value);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] == value) {
            printf("Chi so cua phan tu can tim: %d", mid);
            found = 1;
            break;
        } else if (a[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (!found) {
        printf("Khong co gia tri thuoc phan tu ban vua nhap, vui long nhap lai!");
    }
    return 0;
}

