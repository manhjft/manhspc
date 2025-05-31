#include<stdio.h>	

 int main(){
 	int a;
 	printf("nhap a = ");
 	scanf("%d", &a);
 	
 	int b;
 	printf("nhap b = ");
 	scanf("%d", &b);
 	
 	if(a==0){
 		printf("phuong trinh vo nhiem");
	 }else{
	 	int x;
	 	x = a/-b;
	 	printf("x = %d\n", x);
 }
 }
