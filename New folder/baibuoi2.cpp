#include<stdio.h>	

 int main(){
 	int a;
 	printf("nhap a = ");
 	scanf("%d", &a);
 	
 	int b;
 	printf("nhap b = ");
 	scanf("%d", &b);
 	
 	int c;
 	printf("nhap c = ");
 	scanf("%d", &c);
 	
 	if(a+b>c){
 		printf("a,b,c la mot tam giac");
	 }else {

	 if (b+c>a){
	 	printf("a,b,c la mot tam giac");
	 	
	 }else{
	 	if(a+c>b){
	 		printf("a,b,c la mot tam giac");
		 }else{
		 	printf("a,b,c khong phai mot tam giac");
		 }
	 		 }
	 }
	 
 	
 }
