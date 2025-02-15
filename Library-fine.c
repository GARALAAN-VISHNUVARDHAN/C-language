#include<stdio.h>
int main()
{
    int day;
    printf("enter number of days:");
    scanf("%d",&day);
if(day<=30)
    {
        
    if(day==1)
    {
        printf("no fine");
    }
    else if(day>=2&&day<=10)
      {
          printf("fine is 100");
      }
    else if(day>=11&&day<=30)
    {
        printf("fine is 500");
    }
    }
        
else

{
    printf("you card is terminated");
}
}
