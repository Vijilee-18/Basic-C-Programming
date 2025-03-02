/*Author:Vijilee george kurian
Description:Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

Question source:Leet code problems*/

#include<stdio.h>
int main()
{
    int i,j,n,target,pos_1,pos_2;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the target sum:");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]+array[j]==target)
            {
                pos_1=i;
                pos_2=j;
                printf("%d,%d ",pos_1,pos_2);
            }
        }
    }
    return 0;
}