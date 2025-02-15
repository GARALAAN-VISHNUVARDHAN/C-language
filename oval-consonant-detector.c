// You are using GCC
#include<stdio.h>
int main()
{
    char VV;
    printf("enter a charecter\n");
    scanf("%c",&VV);
    switch(VV)
    {
        case 'a':case'A':
        case 'e':case'E':
        case 'i':case'I':
        case 'o':case'O':
        case 'u':case'U':
            printf(" is vowel");
            break;
            
        default:
            printf(" consonent");
            break;
        return 0;
    }
    
}
