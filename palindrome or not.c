/*Author:Vijilee George Kurian
Decription:To check wheather a given number is palindrome or not
Date:03-02-2025*/

#include<stdio.h>
int main()
{
    int num,unmodifed_num,reversed_num=0,remainder;
    printf("Enter some number:");
    scanf("%d",&num);
    unmodifed_num=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed_num=reversed_num*10+remainder;
        num=num/10;
        
    }
    printf("%d is the reversed form",reversed_num);
    if (unmodifed_num==reversed_num)
    {
        printf("\nIt is palindrome");
    }
    else{
        printf("\nIt's not palindrome");
    }
    return 0;
    
}
