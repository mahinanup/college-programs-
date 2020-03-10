#include <stdio.h>
#include <stdlib.h>
void input_array(int arr[2][2],int rows,int cols)
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
}
void multiply(int arr1[2][2],int arr2[2][2],int arr3[2][2],int row1,int col1,int row2,int col2)
{
                int i,j,k;
                if(col1 != row2)
                {
                                printf("multiplication cannot be performed\n");
                                return;
                }
                else
                                for(i=0;i<row1;i++)
                                {
                                                for(j=0;j<col2;j++)
                                                {
                                                                arr3[i][j]=0;
                                                                for(k=0;k<col2;k++)
                                                                {
                                                                                arr3[i][j]+= arr1[i][k]*arr2[k][j];
                                                                }
                                                }
                                }
                                printf("the matrix after multiplication is\n");
                                for(i=0;i<row1;i++)
                                {
                                                printf("\n");
                                                for(j=0;j<col2;j++)
                                                {
                                                printf("\t%d",arr3[i][j]);
                                                }
                                }
}
void main()
{
                int a1[2][2],a2[2][2],a3[2][2];
                int r1,r2,c1,c2;
                printf("enter the rows of first matrix\n");
                scanf("%d",&r1);
                printf("enter the columns of first matrix\n");
                scanf("%d",&c1);
                input_array(a1,r1,c1);
                printf("enter the rows of second matrix\n");
                scanf("%d",&r2);
                printf("enetr the columns of second matrix\n");
                scanf("%d",&c2);
                input_array(a2,r2,c2);
                multiply(a1,a2,a3,r1,c1,r2,c2);

}
