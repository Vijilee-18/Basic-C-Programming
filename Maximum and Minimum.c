/*Author:Vijilee George Kurian
Description:To find the largest and smallest element in an array
date:11-02-2025*/

#include<stdio.h>
int main()
{
    int i,limit,max,min,pos_1,pos_2;
    printf("Enter the size of the array:");
    scanf("%d",&limit);
    int array[limit];
    for(i=0;i<limit;i++)
    {
        printf("Enter the elements:");
        scanf("\n%d",&array[i]);
    }
    max,min=array[0];
    for(i=1;i<limit;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            pos_1=i;
        }
        if(array[i]<min)
        {
            min=array[i];
            pos_2=i;
        }
    }
    printf("%d is the largest element at the index position %d",max,pos_1);
    printf("\n%d is the smallest element at the index position %d",min,pos_2);
    return 0;
}