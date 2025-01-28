/* Author: Vijilee George Kurian 
   Descrption:Program to find the largest among three number's
   Date:28-01-2025 */
#include<stdio.h>
int main()
{
    int num_1,num_2,num_3;
    printf("Enter number1:");
    scanf("%d",&num_1);
    printf("Enter number2:");
    scanf("%d",&num_2);
    printf("Enter number3:");
    scanf("%d",&num_3);
    if (num_1>num_2)
    {
        if(num_1>num_3)
        {
            printf("%d is the largest number",num_1);
        }
        else
        {
            printf("%d is the largest number",num_3);
        }
    }
    else
    {
        if(num_2>num_3)
        {
            printf("%d is the largest number",num_2);
        }
        else 
        {
            printf("%d is the largest number",num_3);
        }
    }
    return 0;
}
