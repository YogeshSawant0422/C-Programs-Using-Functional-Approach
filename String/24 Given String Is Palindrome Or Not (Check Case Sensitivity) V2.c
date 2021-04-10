//Given String Is Palindrome Or Not (Check Case Sensitivity) V2
#include<stdio.h>

int main()
{
    char str[10] ={'\0'};
    int i = 0, j =0;

    printf("\n Enter A String : ");
    gets(str);

    while(str[i] != '\0')
    {
        i++;
    }
    i--;

    while(i > j)
    {
        if( str[j] == str[i] || str[j] + 32 == str[i] || str[j] - 32 == str[i] )
        {
            j++;
            i--;
            continue;
        }
        else
        {
            j = -1;
            break;
        }
    }
    if( j != -1)
    {
        printf("\n String Is Palindrome ");
    }
    else
    {
        printf("\n String Is Not Palindrome");
    }
    return 0;
}
