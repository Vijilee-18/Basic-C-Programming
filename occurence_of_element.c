/*Author:Vijilee George Kurian
Description:To find the no.of occurence of a particular element in an array
date:12-02-2025*/
#include<stdio.h>
int main()
{
    int i,limit,key,count;
    printf("Enter the size of array:");
    scanf("%d",&limit);
    int array[limit];
    for(i=0;i<limit;i++)
    {
        printf("Enter the value:");
        scanf("\n%d",&array[i]);
    }
    printf("Enter the value which occurence need to be identified:");
    scanf("%d",&key);
    for(i=0;i<limit;i++)
    {
        if(array[i]==key)
        {
            count=count+1;
        }
    }
    printf("%d has occuered in the array %d times",key,count);
    return 0;
}