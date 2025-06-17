#include <stdio.h>

int main() {
    int n, i, x, timThay = 0;
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int mang[n];

    for(i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(mang[i] == x) {
            timThay = 1;
            break;
        }
    }

    if(timThay) {
        printf("Gia tri %d co trong mang.\n", x);
    } else {
        printf("Gia tri %d khong co trong mang.\n", x);
    }

}

