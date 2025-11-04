#include <stdio.h>

int main() {
    int n, x, found = 0; 
    int arr[100];
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //nhap gtr
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    //linear goes here
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d duoc tim thay tai vtri so %d\n", x, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay\n");
    }

    return 0;
}
