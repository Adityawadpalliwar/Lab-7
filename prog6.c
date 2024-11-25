/*Define a structure customer to specify data of customer in a bank. The data to be
stored is: Account number (integer), Name (character string having at most 50 characters), andBalanceinaccount (integer). Assume data for all the 10 customers of the bank are stored in the structure array :
struct customer bank[10];
The function, transaction, is used to perform a customer request for withdrawal or deposit totheaccount.Every such request is represented by the following three quantities: Account number of thecustomer, request type (0 for deposit and 1 for withdrawal) and amount. The function prototype is as follows:
int transaction ( int account_number, int request_type, int amount, struct customer bank[10])
The transaction function returns 0 if the transaction fails and 1 otherwise. The transaction fails onlywhenthe account balance is less than the withdrawal amount requested. The array bank (definedabove) isanother input to the transaction function and is suitably updated after every request. In caseof afailedtransaction no change is made in the bank array.*/
#include<stdio.h>
struct customer
{
 int acc;
 char name[50];
 int balance;
} bank[10];
int transaction(int acc,int type,int amount,struct customer bank[10])
{  int i;
for(i=0;i<10;i++)
{
   if(acc==bank[i].acc)
   break;
}
    if (type==0)
    { 
       bank[i].balance+=amount;
       return 1;
    }
    if(type==1)
    {
        if ( bank[i].balance< amount)
        return 0;
        else
        {bank[i].balance-=amount;
        return 1;}
    }
    else
    return 0;
}
int main()
{   
 int i,k,amt,acc,m,j;

   printf("enter your details ");
    for(i=0;i<1;i++)
    {   printf("\n enter your account number");
       scanf("%d",& bank[i].acc);
       getchar();
        printf("\n enter your name");
       fgets(bank[i].name,50,stdin);
        printf("\n enter your balance");
       scanf("%d",&bank[i].balance);
    }

   printf("\nenter your account no for transaction ");
   scanf("%d",&k);
   int req;
   printf("\nenter request type (0 for deposit and 1 for withdrawal): ");
   scanf("%d",&req);
 
   if(req==0)
   {
      printf("\nenter money to deposit ");
      scanf("%d",&amt);
      m=transaction(k,req,amt,bank);
      if(m==1)
      {    printf("\nvalid transaction");
         for(j=0;j<10;j++)
         {
          if(k==bank[j].acc)
          {
             printf("\nyour new balance is %d",bank[j].balance);
             break;
          }
         }
      }
      else
      printf("invalid transaction");
   }
   if(req==1)
   {
      printf("\nenter money to withdraw ");
      scanf("%d",&amt);
      m=transaction(k,req,amt,bank);
      if(m==1)
      {   printf("\nvalid transaction");
         for(j=0;j<10;j++)
         {
         if(k==bank[j].acc)
         { printf("\nyour new balance is %d",bank[j].balance);
         break;}
         }}
      else
      printf("invalid transaction");

   }

   return 0;
}