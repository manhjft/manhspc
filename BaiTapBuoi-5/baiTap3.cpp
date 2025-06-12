#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

  
    while (i < n) {
        if (n % i == 0) {
        	 printf("%d,", i);
            sum += i;
        }
        i++;
    }

    if (sum == n && n != 0)
        printf("vay %d la so hoan hao.\n", n);
    else
        printf("vay %d khong phai la so hoan hao.\n", n);

    
}

