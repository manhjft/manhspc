#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    i = n - 1;

    while (i > 0) {
        if (i % 2 == 0 && i % 3 == 0) {
            printf("So lon nhat chia het cho 2 va 3 la: %d", i);
            break; 
        }
        i--; 
    }

    if (i == 0) {
        printf("Khong co so nao nho hon %d chia het cho ca 2 va 3\n", n);
    }

    
}

