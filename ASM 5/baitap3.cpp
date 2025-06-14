#include <stdio.h>

int main() {
    int a, b, r;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("Uoc chung lon nhat la: %d\n", a);
    return 0;
}
