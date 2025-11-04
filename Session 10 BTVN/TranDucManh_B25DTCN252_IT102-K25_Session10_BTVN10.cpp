#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp;
    int arr[100];
    int value;
    int left, right, mid;
    int found = 0;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
    	printf("Nhap cac gia tri trong phan tu: ");
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim trong mang: ");
    scanf("%d", &value);
    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("So nguyen nho nhat trong mang la: %d\n", min);
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == value) {
            printf("Phan tu %d co chi so %d trong mang da sap xep.\n", value, mid);
            found = 1;
            break;
        } else if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (!found) {
        printf("So cua ban vua nhap khong co trong phan tu cua mang, vui long nhap lai!\n");
    }
    return 0;
}

