#include<stdio.h>

main()

{
	int a,b;
	
	printf("enter value a=");
	scanf("%d",&a);
	
	printf("enter value b=");
	scanf("%d",&b);
	
	a=b*a;
	b=a/b;
	a=a/b;
	
	printf("swap value = %d %d",a,b);
	
}