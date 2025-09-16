#include<stdio.h>

int main (){
  int A=0 ;
  int B=0;
  int C=0;
  
	printf("enter number A");
	scanf("%d",&A);
	printf("enter number B");
	scanf("%d",&B);
	C=A ;
	A=B ;
	B=C ;
	printf("A= %d\n",B);
	printf("B= %d\n",A);
	
}