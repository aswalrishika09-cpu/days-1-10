#include<stdio.h>
int main(){
	int amount,principal, rate,time;
	printf("enter principal");
	scanf("%d",&principal);
	printf("enter rate");
	scanf("%d",&rate);
	printf("enter time");
	scanf("%d",&time);
	int SI= (principal*rate*time)/100;
	printf("simple interest=%d",SI);
	amount=principal*(1+rate/100)^time;
	int CI=amount-principal;
	printf("\ncompound interest=%d",CI);
}
