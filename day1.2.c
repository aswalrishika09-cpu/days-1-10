#include<stdio.h>
int main(){
	int a,b,sum,differ,product, quotient;
	printf("enter the first number ");
	scanf ("%d",&a);
	printf("enter the second number ");
	scanf("%d",&b);
	sum = a+b;
	printf("\nsum =%d",sum);
	differ= a-b;
	printf("\ndifference = %d",differ);
	product = a*b;
	printf("\nproduct=%d",product);
	quotient = a/b;
	printf("\nquotient = %d",quotient);
}
