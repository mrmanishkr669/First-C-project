#include <stdio.h>
#include <stdlib.h>
void addition(int r,int c,int a[10][10],int b[10][10]);
int main()
{
    int r,c,a[10][10],b[10][10],i,j;
    printf("Enter the number of rows :- ");
    scanf("%d",&r);
    printf("Enter the number of columns :- ");
    scanf("%d",&c);
    printf("Enter the elements of matrix A :- ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter the elements of matrix B :- ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    addition(r,c,a,b);
    return 0;
}
    void addition(int r,int c,int  a[10][10],int b[10][10])
{
    int sum[r][c],i,j;
    for(i=0;i<r;i++)
       { for(j=0;j<c;j++)
        
            sum[i][j]=a[i][j]+b[i][j];
       }
        printf("Addition of matrix is :- \n");
       
        for(i=0;i<r;i++)
          {  for(j=0;j<c;j++)
            
              {  printf("%d\t",sum[i][j]);}
                printf("\n");
                
        }
}



