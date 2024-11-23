#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 15;

}age;

int main(){

    age.day=22;
    age.month=11;
    age.year=2006;

printf("%d %d %d",age.day,age.month,age.year);
}