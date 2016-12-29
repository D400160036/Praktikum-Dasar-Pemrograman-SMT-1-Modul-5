#include<stdio.h>
int main ()
{
    int matrix[2][2];
    int a,b,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        system ("COLOR a");
        printf("Masukkan angka matrix [%d][%d] : ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        printf(" %d ",matrix[i][j]);
    }
    printf("\n");
    }
}
