#include<stdio.h>
int average(int *p,int n)
{   int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	return sum/n;
}
 int main()
 {  int i,n;
    printf("enter the number of elements in the given array");
 	scanf("%d",&n);
 	
 	int a[n];
 	
 	printf("enter the elements of the array\n");
 	for(i=0;i<n;i++)
 	{
 		printf("enter the %d element : ",i+1);
 		scanf("%d",&a[i]);
 		
	}
	
	int avg= average(a,n);
	printf("average of the given numbers is %d",avg);
	return 0;
 	
 }