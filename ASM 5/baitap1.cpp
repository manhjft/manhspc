#include <stdio.h>

int main() {
	int n, TongUoc=0;
	
	
	printf("nhap n: ");
	scanf("%d", &n);
	
	
	for(int i=1; n>=i; i++){
		if(n%i==0){
			printf("%d,", i);
			TongUoc+=i;
		}
	}printf("Tong Uoc= %d", TongUoc);
}
