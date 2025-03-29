/*Author:Vijilee George Kurian 
Description:Program to print the Fibonacci Series Using Recurssion
Date:25/03/2025*/
#include<stdio.h>
int fibonacci(int);
int main()
{
    int limit;
    printf("Enter the limit which series need to be printed:");
    scanf("%d",&limit);
    for(int i=0;i<=limit;i++)
    {
        printf("%d\t",fibonacci(i));
    }
    return 0;
}
    int fibonacci(int i)
    {
        if(i==0)
        {
            return 0;
        }
        else if(i==1)
        {
            return 1;
        }
        else
        {
            return fibonacci(i-2)+fibonacci(i-1);
        }
    }
