#include<stdio.h>
int main()
{
    int sum=0 ,i, a=10,b=20;
    printf("enter i:");
    scanf("%d",&i);
    for(i;i<=10;i++)
    {
       
        if(i==1)
        {
            goto addition;
          
            
        }
         else if(i==2){
            goto mul;
           
            
            }
       
        else 
        {
            goto terminate;
           
        }
    }
    addition:
    sum=a+b;
    printf("%d",sum);
    goto end;
    
    mul:
    sum=a*b;
    printf("%d",sum);
    goto end;
    
    terminate:
    printf("\nend");
    end:
    printf("\nexit");
   
}
// output:
// enter i:2
// 200
// exit
