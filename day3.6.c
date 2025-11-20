#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	c=a;
	a=b;
	printf("after swapping ");
	printf("\n%d",a);
	printf("\n%d",c);
}
