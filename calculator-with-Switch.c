// You are using GCC
#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("enter choice add1,sub2,mul3,div4:\n");
    scanf("%d",&i);
    if(i<=5){
    printf("enter a,b:\n");
    scanf("%d%d",&a,&b);
    }
    switch(i)
    {
        
    
        case 1:
            c=a+b;
            printf(" add of a,b :'%d'",c);
            break;
         case 2:
            c=a-b;
            printf("sub of a ,b:'%d'",c);
            break;
         case 3:
            c=a*b;
            printf("mul of a,b:'%d'",c);
            break;
        case 4:
            c=a/b;
            printf("div of a,b:'%d'",c);
            break;
        default :
            printf("enter the valid choice:\n");
            break;
    }
    
}
