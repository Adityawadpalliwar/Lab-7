#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string[50];
 
    printf("enter the string1: ");
    fgets(string,50,stdin);
    string[strlen(string)-1]='\0';
    
    char *p=string;
    int n = strlen(string);
    
    for(i=0;i<n;i++)
    printf("%c",*(p+n-i-1));
    
   return 0;
}