#include<stdio.h>

main()

{
	int x,y,xy;
	
	printf("enter value x=");
	scanf("%d",&x);
	
	printf("enter value y=");
	scanf("%d",&y);

	xy=(x*x*x)+(3*x*x*y)+(3*y*y*x)+(y*y*y);
	
	printf("value = %d",xy);
	
}