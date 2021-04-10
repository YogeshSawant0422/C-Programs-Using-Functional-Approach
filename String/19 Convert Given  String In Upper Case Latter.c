//Convert Given  String In Upper Case Latter
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z' )
        {
             cSrc[i] = cSrc[i] - 32;
        }
        i++;
    }

    printf("\n A New Uppercase Letters Strings Is : %s",cSrc);

    printf("\n\n Thanks !!!");
    getch();
    return 0;
}
