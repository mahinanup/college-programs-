#include <stdio.h>
#include <stdlib.h>
void input_array(int arr[3][3],int rows,int cols)
{
                int i,j;
                printf("enter the elements of matrix\n");
                for(i=0;i<rows;i++)
                {
                                for(j=0;j<cols;j++)
                                {
                                                printf("enter element %d%d\n",i,j);
                                                scanf("%d",&arr[i][j]);
                                }
                }
                 printf("before the transpose the martrix is\n");
                for(i=0;i<rows;i++)
                {
                                printf("\n");
                                for(j=0;j<cols;j++)
                                {
                                                printf("\t %d",arr[i][j]);
                                }
                }
}
void transpose_array(int arr[3][3],int trans[3][3],int rows ,int cols)
{
                int i,j;
                for(i=0;i<rows;i++)
                {
                                for(j=0;j<cols;j++)
                                {
                                                trans[j][i]=arr[i][j];
                                }
                }
                printf("\nafter the transpose the martrix is\n");
                for(i=0;i<cols;i++)
                {
                                printf("\n");
                                for(j=0;j<cols;j++)
                                {
                                                printf("\t %d",trans[i][j]);
                                }
                }
}
void main()
{
                int a[3][3],t[3][3],r,c;
                printf("enter the rows of matrix\n");
                scanf("%d",&r);
                printf("enter the columns of the matrix\n");
                scanf("%d",&c);
                input_array(a,r,c);
                transpose_array(a,t,r,c);
}
