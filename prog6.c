#include<stdio.h>
struct customer
{
 int acc;
 char name[50];
 int balance;
} bank[10];
int transaction(int acc,int type,int amount,struct customer bank[10])
{
    if (type==0)
    {
       return 1; 
    }
    if(type==1)
    {
        if ( bank[i].balance< amount)
        return 0;
        else
        return 1;
    }
    else
    printf("invalid transaction type")
}
int main()

{   struct customer bank[10];
 int i;

   printf("enter your details ");
    for(i=0;i<5;i++)
    {   printf("\n enter your account number");
       scanf("%d",& bank[i].acc);
        printf("\n enter your name");
       fgetc(bank[i].word,50,stdin);
        printf("\n enter your balance");
       scanf("%d",&bank[i].balance);
    }
   int req;
   printf("enter request type (0 for deposit and 1 for withdrawal): ");
   scanf("%d",&req);

   
}