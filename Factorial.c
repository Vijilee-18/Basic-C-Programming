/* Author: Vijilee George Kurian 
Description: To find the factorial of a number 
Date:04-02-2025*/
#include<stdio.h>
int main()
{
    int num,i=1,factorial=1;
    printf("Enter a number:");
    scanf("%d",&num);
    while(i<=num)
    {
        factorial=factorial*i;
        i++;
    }
    printf("Factorial of the number is:%d",factorial);
    return 0;
}