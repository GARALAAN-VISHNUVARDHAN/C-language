// You are using GCC

#include<stdio.h>
int main()
{
    int n,m,j,i,a[100][100];
    printf("enter rows:");
    scanf("%d",&n);
    printf("enter columns:");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
            printf("enter the values  a[%d][%d]:",i,j);//enter the values a[0][0]:
            scanf("%d",&a[i][j]);//it take input from key board
        }
    }
    
  
   printf("{\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
           
           
            
            printf("\t%d",a[i][j]);
            
        }
        printf("\n");
    }
    printf("}");
}
//  enter rows:2
// enter columns:2
// enter the values  a[0][0]:10
// enter the values  a[0][1]:20
// enter the values  a[1][0]:30
// enter the values  a[1][1]:40
// {
// 	10	20
// 	30	40
// }
//  
