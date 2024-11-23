#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int gcd(int a,int b,int t)
{
 if(a%t==0&&b%t==0)
 return t;
 else
 {t--;
 return gcd(a,b,t);
 }
}
int main()
{ int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    int srt=(a>b)?b:a;

    printf("the gcd of %d and %d is %d",a,b,gcd(a,b,srt));

}