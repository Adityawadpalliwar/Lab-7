/*. Write a C program to append one array elements to the end of another array using DMA*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{ int i;
    int *a = (int*)calloc(10,sizeof(int));
    int *b = (int*)calloc(10,sizeof(int));
    int *c = (int*)calloc(10,sizeof(int));

    printf("enter the 10 elements of first array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&(*(a+i)));
    }

   for(i=0;i<10;i++)
   {
    *(b+i)=*(a+i);
   }


    a = (int*)malloc(11*sizeof(int));
    int z;
    printf("enter the element to be added in the end\n");
    scanf("%d",&z);

    for(i=0;i<10;i++)
    {
        *(a+i)=*(b+i);
    }
    *(a+10)=z;

    printf("now the array becomes\n");
    for(i=0;i<11;i++)
    {
        printf("%d",*(a+i));
    }
    


}
    

