/*Author:Vijilee George Kurian
Description:To find a particular value in an array using sequential search
date:11-02-2025*/

#include<stdio.h>
int main()
{
    int i,limit,key,flag=0,pos;
    printf("Enter the size of array: ");
    scanf("%d",&limit);
    int array[limit];
    for(i=0;i<limit;i++)
    {
        printf("Enter the values:");
        scanf("\n%d",&array[i]);
    }
    printf("enter the value to be founded:");
    scanf("%d",&key);
    for(i=0;i<limit;i++)
    {
        if(array[i]==key)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d has been founded at the index number %d",key,pos);
    }
    else
    {
        printf("%d is not founded in the array",key);
    }
    return 0;
}
