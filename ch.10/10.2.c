#include<stdio.h>

void div(){
	
	int a;
	printf("Enter a : ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("the given number is divisible by 3&5");
	}
	else {
		printf("the given number is not divisible by 3&5");
	}
	
}
void main(){
	div();
}



