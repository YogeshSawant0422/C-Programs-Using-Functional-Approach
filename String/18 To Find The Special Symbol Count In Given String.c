// To Find The Special Symbol Count In Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'};
    int i = 0 , Sp_Count = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(!((cSrc[i] >= 'A' && cSrc[i]<= 'Z')|| (cSrc[i] >= 'a' && cSrc[i]<= 'z')|| cSrc[i] == ' ' || cSrc[i] >= '0' && cSrc[i]<= '9'))
        {
            Sp_Count++;
        }
        i++;
    }
    printf("\n The Count Of Special Symbols In Given String Is : %d",Sp_Count);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
