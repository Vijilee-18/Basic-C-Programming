/*Author:Vijilee George Kurian
Description:To check Wheather a numberis Armstrong or not
date:04-02-2025*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num,unmodified_num,unmodified_num2,count=0,sum=0,remainder;
    printf("Enter a number:");
    scanf("%d",&num);
    unmodified_num=num;
    unmodified_num2=num;
    while(num!=0)
    {
        remainder=num%10;
        count=count+1;
        num=num/10;
    }
    while(unmodified_num!=0)
    {
        remainder=unmodified_num%10;
        sum=sum+pow(remainder,count);
        unmodified_num=unmodified_num/10;
    }
    if(unmodified_num2==sum)
    {
        printf("It's an armstrong number");
    }
    else{
        printf("It's not an armstrong number");
    }
    return 0;
    
}