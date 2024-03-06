#include<stdio.h>

main()

{
	int a,b,c;
	
	printf("Enter value a=");
	scanf("%d",&a);
	
	printf("Enter value b=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("swap value = %d %d",a,b);
	
}