#include<stdio.h>
int main()
{
    int c,mb,cb,fb,vb,pb,qty;
    char procced;
    int total;
    do{
    
    printf("1.mutton biriyani\n");
    printf("2.chicken biriyani\n");
    printf("3.fish biriyani\n");
    printf("4.veg biriyani\n");
    printf("5.prawns biriyani\n");
    printf("enter your choice::::");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("enter mutton biriyani price::::");
        scanf("%d",&mb);
        printf("enter quantity::");
        scanf("%d",&qty);
        printf("total price is %d",total+=qty*mb);
        break;
    case 2:
        printf("enter chicken biriyani price::::");
        scanf("%d",&cb);
        printf("enter quantity::");
        scanf("%d",&qty);
        printf("total price is %d",total+=qty*cb);
        
       break;
    case 3:
        printf("enter fish biriyani price::::");
        scanf("%d",&fb);
        printf("enter quantity::");
        scanf("%d",&qty);
        printf("total price is %d",total+=qty*fb);
       break;
    case 4:
        printf("enter veg biriyani price::::");
        scanf("%d",&vb);
        printf("enter quantity::");
        scanf("%d",&qty);
        printf("total price is %d",total+=qty*vb);
        break;
    case 5:
        printf("enter prawns biriyani price::::");
        scanf("%d",&pb);
        printf("enter quantity::");
        scanf("%d",&qty);
        printf("total price is %d\n",total+=qty*pb);
        break;
    default:
        printf("wrong choice");
        break;
    }
    printf("do you want to oder again y/n");
    scanf(" %c",&procced);
   
}
   while(procced=='y'||procced=='Y');
printf("thanks for your oder\n");
printf("your total bill is:%d",total);
}
// 1.mutton biriyani
// 2.chicken biriyani
// 3.fish biriyani
// 4.veg biriyani
// 5.prawns biriyani
// enter your choice::::1
// enter mutton biriyani price::::200
// enter quantity::2
// total price is 32589do you want to oder again y/ny
// 1.mutton biriyani
// 2.chicken biriyani
// 3.fish biriyani
// 4.veg biriyani
// 5.prawns biriyani
// enter your choice::::3
// enter fish biriyani price::::250
enter quantity::3
total price is 33339do you want to oder again y/nn
thanks for your oder
your total bill is:33339
