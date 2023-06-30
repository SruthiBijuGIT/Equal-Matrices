#include<stdio.h>
int main()
{ 
     int A[10][10],B[10][10],i,j,m,n;
     int row,col,is;
printf("Enter the number of rows\n: ");
scanf("%d", &m) ;
printf("Enter the number of columns\n: ") ;
scanf("%d", &n) ;
printf("Enter values to the matrix A:\n");
for(i=0;i<m;i++){
    for(j= 0;j<n;j++)
 { 
       printf("Enter [%d][%d] value:-",i,j);
       scanf("%d",&A[i][j]);
     }
}
       printf("The given matrix A is\n");
       for(i=0;i<m;++i){
         for(j=0;j<n;++j){
        printf("\t%d",A[i][j]);
         }
         printf("\n\n");
       }
       printf("Enter values to the matrix B is\n");
       for(i=0;i<m;++i){
         for(j=0;j<n;++j){
           printf("Enter [%d][%d] value:-",i,j);
        scanf("%d",&B[i][j]);
         }
         printf("\n\n");
       }
       is=1;
       for(row=0;row<m;row++){
         for(col=0;col<n;col++){
           if(A[row][col]!=B[row][col]){
             is=0;
             break;
           }
         }
       }
       if(is==1){
         printf("Matrix A is equal to Matrix B\n");
       }
       else{
         printf("Matrix A is not equal to Matrix B\n");
       } 
       return 0;
}
    
