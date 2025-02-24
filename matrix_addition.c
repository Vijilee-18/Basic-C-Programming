/*Author:Vijilee George Kurian
Description:Program to add two matrice's*/
#include<stdio.h>
int main()
{
    int row_1,row_2,row_3,col_1,col_2,col_3,i,j;
    printf("Enter the no.of row's and column's of matrix_1:");
    scanf("%d%d",&row_1,&col_1);
    printf("Enter the no.of row's and column's of matrix_2:");
    scanf("%d%d",&row_2,&col_2);
    int matrix_1[row_1][col_1] ,matrix_2[row_2][col_2];
    if(row_1==row_2&&col_1==col_2)
    {
        for(i=0;i<row_1;i++)
        {
            for(j=0;j<col_1;j++)
            {
                printf("Enter the elements of matrix_1:");
                scanf("%d",&matrix_1[i][j]);
            }
        }
        for(i=0;i<row_2;i++)
        {
            for(j=0;j<col_2;j++)
            {
                printf("Enter the elements of matrix_2:");
                scanf("%d",&matrix_2[i][j]);
            }
        }
        row_3=row_1;
        col_3=col_1;
        int result_matrix[row_3][col_3];
        printf("Sum of the matrix is:\n");
        for(i=0;i<row_3;i++)
        {
            for(j=0;j<col_3;j++)
            {
                result_matrix[i][j]=matrix_1[i][j]+matrix_2[i][j];
                printf("%d\t",result_matrix[i][j]);
                
            }
            printf("\n");
        }
    }
    else
    {
        printf("Order of matrix need to be equal");
    }
    return 0;
}