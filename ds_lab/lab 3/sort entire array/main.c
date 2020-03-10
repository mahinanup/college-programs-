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
                 printf("before the sorting the martrix is\n");
                for(i=0;i<rows;i++)
                {
                                printf("\n");
                                for(j=0;j<cols;j++)
                                {
                                                printf("\t %d",arr[i][j]);
                                }
                }
}
void sort(int arr[3][3],int rows, int cols)
{
                int i,j,tmp;
                for(i=0;i<=rows-1;i++)
                {
                                for(j=0;j<=rows-2-i;j++)
                                {
                                                if(arr[0][j]>arr[0][j+1])
                                                {
                                                                tmp = arr[0][j];
                                                                arr[0][j]=arr[0][j+1];
                                                                arr[0][j+1]=tmp;

                                                }
                                }
                }
                printf("\nafter the sorting the martrix is\n");
                for(i=0;i<rows;i++)
                {
                                printf("\n");
                                for(j=0;j<cols;j++)
                                {
                                                printf("\t %d",arr[i][j]);
                                }
                }
}
void main()
{

                int a[3][3],r,c;
                printf("enter the rows of matrix\n");
                scanf("%d",&r);
                printf("enter the columns of matrix\n");
                scanf("%d",&c);
                input_array(a,r,c);
                sort(a,r,c);
}
