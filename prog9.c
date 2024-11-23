#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct birth
{
    char place[10];
    struct time
    {
     int day;
     int month ;
     int year;
    }date;
    

}bio;

int main(){
    printf("enter place of birth: ");
    scanf("%s",bio.place);
    printf("enter your date of birth");
    scanf(" %d %d %d",bio.date.day,bio.date.month,bio.date.year);

    printf("your were born in %s",bio.place);
    printf(" on %d %d %d",bio.date.day,bio.date.month,bio.date.year);

    return 0;
}