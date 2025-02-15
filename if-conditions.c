#include<stdio.h>
int main()
{
    int x;
    int y;
    int xage;
    int yage;
    printf("enter x");
    scanf("%d",&x);
    printf("enter y");
    scanf("%d",&y);
    printf("enter xage");
    scanf("%d",&xage);
    printf("enter yage");
    scanf("%d",&yage);
    if(x>=100000&&xage>=25)
    {
        if(y>=50000&&yage>=35)
        {
            printf("loan aproved");
        }
        else
        {
        printf("because of y rejected");
        }
    }
    else
    {
        printf("because of x rejected ");
    }
}
