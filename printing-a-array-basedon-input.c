#include<stdio.h>
int main(){
   int i ,j,n,m,b[100][100],c[100][100];
 /*a[100][100]= {
  {20,30,40,50},
  {20,30,40,50},
  {100,99,98,97}
     };
     */
     int  a[100][100] = {
        {20, 30, 40, 50},
        {20, 30, 40, 50},
        {100, 99, 98, 97}
    }; 
   printf("enter the no of rows");
   scanf("%d",&n);
   printf("enter the no of colunm");
   scanf("%d",&m);
   for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\n",a[i][j]);
           
        }
       
   }
// enter the no of rows3
// enter the no of colunm1
// 20
// 20
// 100
    
}
