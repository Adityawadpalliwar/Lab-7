#include<stdio.h>
 
char s(n)
{
	if (n==1)
	return 1;
	
	if(n==2)
	retun 2;
	
	if(n==3)
	return 3;
	
	return s(n-1)+s(n-2)+s(n-3);
	
}

main()
{  int n;
	printf("enter the value of n: ");
	scanf("%d",&n)
	
	int y=s(n);
	
	printf("%d",y);
	
	return 0;
}