#include <stdio.h>

int main() {
    int n, i, j, temp;
    int id;
    int prices[100];
    int left, right, mid;
    int found = 0;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);
    printf("Nhap gia ban cua tung san pham:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    printf("Nhap ma san pham can tim (index): ");
    scanf("%d", &id);
    if (id < 0 || id >= n) {
        printf("Ma san pham khong hop le!\n");
        return 0;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (prices[j] > prices[j + 1]) {
                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }
    printf("Gia cua san pham co ma %d la: %d\n", id, prices[id]);
    printf("Danh sach gia san pham sau khi sap xep tang dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }
    printf("\n");
    return 0;
}

