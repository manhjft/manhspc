#include<stdio.h>	

 int main(){
 	float a;
 	printf("nhap a = ");
 	scanf("%f", &a);
 	
 	float b;
 	printf("nhap b = ");
 	scanf("%f", &b);
 	
 	float c;
 	printf("nhap c = ");
 	scanf("%f", &c);
 	
 	if (c==0){
 		printf("pt vo so nhiem");
	 }else{
	 	float d;
	 	d = b*2-4*a*c;
	 	if(d==0){
	 		float x;
	 		x = -b/(2*a);
	 		printf("%f", x);
		 }else{
		 	if(d<0){
		 		printf("vo nhiem thuc");
			 }else{
			 	if(d>0){
			 		float x1, x2;
			 		x1 = (-b + (d*2)) / (2 * a);
			 	    x2 = (-b - (d*2)) / (2 * a);
			 		printf ("x1 = %f\n", x1);
			 		printf ("x2 = %f\n", x2);
				 }
			 }
		 }
	 	
	 }
 }
