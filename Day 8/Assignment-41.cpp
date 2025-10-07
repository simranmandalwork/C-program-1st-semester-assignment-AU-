#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	printf("Enter num3:");
	scanf("%d",&num3);
	if(num1==num2&&num2==num3&&num3==num1){
		printf("all the numbers are equal\n");
	}else{
		printf("the numbers are mixed\n");
	}
	if(num1>=0&&num2>=0&&num3>=0){
		printf("all numbers entered are positive\n");
	}
	if(num1>num2&&num1>num3){
		printf("%d is the greatest number\n",num1);
		}
	if(num2>num3&&num2>num1){
		printf("%d is the greatest\n",num2);
		}
	if(num3>num2&&num3>num1){
		printf("%d is the greatest number\n",num3);
	}
	return 0;	
	}
