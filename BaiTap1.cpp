#include<stdio.h>	

 int main(){
 	int a;
 	printf("nhap a = ");
 	scanf("%d", &a);
 	
 	
 	if(a>9){
 		printf("hoc sinh xuat sac");
	 }else {
	 
	 if(a>=8){
	 	printf("hoc sinh gioi");	
	 }else{
	 	if(a>=7){
	 		printf("hoc sinh kha");
		 }else{
		 	if(a>=5){
		 		printf("hoc sinh trung binh");
			 }else{
			 	printf("hoc sinh yeu");
			 }
		 }
	 	}
	 }

 	
 }
