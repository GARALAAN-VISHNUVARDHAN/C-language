// You are using GCC 1D

#include<stdio.h>
int main(){
    int i;
    int marks[6]={20,3,5,67,34,78};
    for(i=0;i<6;i++){
    printf("%d\n",marks[i]);
    
        
    }
}
//output:
//20
//3
//5
//67
//34
//78

//2D
#include<stdio.h>
int main(){
    int marks[3][6]={{20,3,5,67,34,78},//[3] tell no of rows and [6] no of clomns
                  {40,30,50,60,33,44},
                  {5,67,34,78,60,33}};
    printf("%d",marks[0][5]);
}
//output:
//78




#include<stdio.h>
int main(){
    char name[4][10]={"vishnu","charan","teja"};//[4] tells number of strings [10] tells number of character limit in each string
    printf("%s",name[1]);
}
//output:
// charan

