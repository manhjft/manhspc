#include <stdio.h>
#include <cmath>
#include "baitap1-2-3-4.h" 
int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int tong = tinhTongChuSo(n);
    printf("Tong cac chu so cua %d la: %d\n", n, tong);
    
    
   int x, y;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &x, &y);

    int ucln = timUCLN(x, y);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ucln);
    
    
    
}
