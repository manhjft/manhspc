#include <stdio.h>

int main() {
	
	int n, tong = 0;
	printf("nhâp n: ");
	scanf("%d",&n);
	
	
	tong += n%10;
	printf("ket qua: %d", tong);
	
}
