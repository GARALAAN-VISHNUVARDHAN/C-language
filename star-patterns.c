#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
    for(j=1;j<=i;j++){
       
        printf("\t*");
        
        
    }
     printf("\n\t");
    printf("\n");
        
    }
    
}
// output:
// enter number of rows5
// 	*	*	*	*	*
	
// 	*	*	*	*
	
// 	*	*	*
	
// 	*	*
	
// 	*
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
    for(j=1;j<=i;j++){
       
        printf("\t*");
        
        
    }
     printf("\n\t");
    printf("\n");
        
    }
    
}
// output:
// enter number of rows5
// 	*
	
// 	*	*
	
// 	*	*	*
	
// 	*	*	*	*
	
// 	*	*	*	*	*
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
      for(j=1;j<=rows-i;j++)
      {
          printf("\t");
      }
          // Print stars
    for(j = 1; j <= (2 * i - 1); j++) {
        printf("*\t");
    }
    
    // Move to the next line
    printf("\n");

      }
    }
//     output:
//     enter number of rows5
// 				*	
// 			*	*	*	
// 		*	*	*	*	*	
// 	*	*	*	*	*	*	*	
// *	*	*	*	*	*	*	*	*	
