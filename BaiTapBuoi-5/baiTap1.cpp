#include <stdio.h>

int main() {
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	
	
	int cnt=0;	
	
	while(cnt<n){
		if(cnt%2 != 0){
			printf("%d,", cnt);
		    cnt++;
	}
	cnt++;	
	}

	
}

