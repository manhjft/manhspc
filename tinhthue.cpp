#include<stdio.h>	

 int main(){
 	
 	float b;
 	
 	float a;
 	printf("nhap so tien thu nhap = ");
 	scanf("%f", &a);
 	
 	if(a<60000000){
 		printf("khong phai dong thue");
	 }else{
	 	if(a>216000000){
	 		b = a*0.20;
		 	printf("so thue phai dong là %f", b);
		 }else{
		 	if(a>120000000){
		 		b = a*0.15;
		 		printf("so thue phai dong là %f", b);
			 }else{
			 	if (a>60000000){
			 		b = a*0.10;
			 		printf("so thue phai dong là %f", b);
				 }else{
				 	b = a*0.05;
				 	printf("so thue phai dong là %f", b);
				 }
			 }
		 }
	 }
 	
 }
