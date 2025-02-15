// You are using GCC

#include<stdio.h>
int main()
{
    int n,m,j,i,a[100][100],b[100][100],c[100][100];
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
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
            printf("enter the values b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
  
   printf("{\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
           
           
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
            
        }
        printf("\n");
    }
    printf("}");
}
// enter rows:2
// enter columns:2
// enter the values  a[0][0]:10
// enter the values  a[0][1]:20
// enter the values  a[1][0]:30
// enter the values  a[1][1]:40
// enter the values b[0][0]:50
// enter the values b[0][1]:60
// enter the values b[1][0]:70
// enter the values b[1][1]:80
// {
// 	60	80
// 	100	120
// }
