/*Author:Vijilee George Kurian
Description:To reverse the Elements of an array
date:12-02-2025*/
#include<stdio.h>
int main()
{
    int i,limit;
    printf("Enter the size of array:");
    scanf("%d",&limit);
    int array[limit],reversed_array[limit];
    for(i=0;i<limit;i++)
    {
        printf("Enter the value:");
        scanf("\n%d",&array[i]);
    }
    printf("Elements of array_1 are:");
    for(i=0;i<limit;i++)
    {
        printf("\t%d",array[i]);
    }
    printf("\nElements in reversed_array are:");
    for(i=limit-1;i>=0;i--)
    {
        reversed_array[limit]=array[i];
        printf("\t%d",reversed_array[limit]);
    }
    return 0;
}