#include <stdio.h>

int main() {
    int n, i, tong = 0, dem = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    int mang[n];

    for(i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    for(i = 0; i < n; i += 2) { 
        if(mang[i] % 2 != 0) {
            tong += mang[i];
            dem++;
        }
    }

    if(dem > 0) {
        float tbc = (float)tong / dem;
        printf("Trung binh cong cac so le o vi tri chan la: %.2f\n", tbc);
    } else {
        printf("Khong co so le nao o vi tri chan.\n");
    }

   
}

