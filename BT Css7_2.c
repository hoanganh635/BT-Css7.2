#include <stdio.h>

int main() {
    int array[5];

    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phần tử thứ %d: %d\n", i + 1, array[i]);
    }

    return 0;
}