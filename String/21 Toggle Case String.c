// Toggle Case String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0;

    printf("\n Enter A Given String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            cSrc[i] -= 32;
        }
        else if (cSrc[i] >='A' && cSrc[i]<='Z')
        {
            cSrc[i]+=32;
        }
        i++;
    }

    printf("\n Given Toggled OUTPUT : %s",cSrc);
    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}
