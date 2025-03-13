#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]",str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&& str[i]<'z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<'Z')
        {
            str[i]=str[i]+32;
        }

    }
    printf("%s is the toggled string",str);
    return 0;
}