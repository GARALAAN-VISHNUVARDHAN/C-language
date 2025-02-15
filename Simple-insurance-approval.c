// You are using GCC
#include<stdio.h>
int main()
{
    //men
 char gender;
 int age;
 char s;
 printf("enter marital satues:");
 scanf("%c",&s);
 
 if(s=='m')
 {
     printf("insurance is aproved\n");
 }
 else if(s!='m')
 {
 printf("enter age");
 scanf("%d",&age);
 printf("enter gender W/M:");
 scanf(" %c",&gender);//use space before the %c
    

         if(age>=30&&gender=='M'||age>=25&&gender=='W')
         {
             printf("aproved");
         }
         
      
 }
 else
 {
         printf("not aproved");
 }

 
 
}
