#include<stdio.h>
int main()
{
    int i,limit;
    printf("Enter the size of array:");
    scanf("%d",&limit);
    int array[limit],copy_array[limit];
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
    printf("\nElements of array_2 are:");
    for(i=0;i<limit;i++)
    {
        copy_array[i]=array[i];
        printf("\t%d",copy_array[i]);
    }
    return 0;
}