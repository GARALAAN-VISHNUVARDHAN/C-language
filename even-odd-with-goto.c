#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
    printf("it is even");
     goto end;
    
    odd:
    printf("odd");
     goto end;
    
    end:
    printf(" ");
}
// output:
// enter a number:10
// it is even 
