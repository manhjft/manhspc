#include <stdio.h>

int main() {
    int n, i = 1, s=1, o=1, a=1, v=1;

    
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

  
    while (i < n) {
        if (n % i == 0) {
        	n++;
        	s++;
        	o++;
        	a++;
        	v++;
        	 printf("Kien %d,", n);
        	 printf("Dinh %d,", s);
        	 printf("Lam %d,", i);
        	 printf("Nen %d,", o);
        	 printf("Tat %d,", a);
        	 printf("Ca %d,", v);
        	 

        }
 
    }

    
    
}

