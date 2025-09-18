#include<stdio.h>
int main(){
	float amnt ,after;
	printf("Please enter the amount spent :\n");
	scanf("%f",&amnt);
	if(amnt<=1000){
		printf("0%% discount");
	}else if (amnt >=1000 && amnt<=2000){
		after = amnt-(amnt*0.05);
		printf("Your amount after 5%% discount was :%f",after);
	}else if (amnt >=2000){
		after = amnt-(amnt*0.1);
		printf("Your amount after 10%% discount was :%f",after);
}
}