/* Write a C program to find the largest element in a given array by allocation memory dynamically*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{   int n;
    printf("enter the number of digits");
    scanf("%d",&n);
    int *a =(int*)calloc(n,sizeof(int));
    int largest =0,i;

    printf("enter the n numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[largest]<a[i])
        {
            largest=i;
        }
    }
    
    
 printf("the largest element in the given array is %d",a[largest]);

}