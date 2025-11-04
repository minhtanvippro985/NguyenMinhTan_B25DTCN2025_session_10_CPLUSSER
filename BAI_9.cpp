#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int id; 
//---------------------- nhap size mang----------------
    printf("Enter number of products: ");
    scanf("%d", &n);
//---------------nhap phan tu ben trong mang----------------
    for (int i = 0; i < n; i++) {
        printf("Price of product ID %d: ", i);
        scanf("%d", &arr[i]);
    }
//-------------------------- tim id san pham -----------
    printf("\nEnter product ID to search: ");
    scanf("%d", &id);
// show san pham
    if (id >= 0 && id < n) {  //check ca size va dam bao so lon hon 0
        printf("Price of product with ID %d: %d\n", id, arr[id]);
    } else {
        printf("Invalid product ID!\n");
    }
//----------------------bubble sort -----------------------------
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {    
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
//----------------------------------------------------------
    // sau khi sap xep thi in ra mang 
    printf("\nList of product prices after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
