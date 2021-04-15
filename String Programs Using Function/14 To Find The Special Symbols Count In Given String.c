//To Find The Special Symbols Count In Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A String : ");
    gets(Str);

    int Ret = Special_Sym(Str);

    printf("\n Count Of Specials Is : %d ",Ret);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
int Special_Sym(char cSrc[])
{
    int i = 0 , Sp_Cnt = 0;

    while(cSrc[i] != '\0')
    {
        if(!(cSrc[i] >= 'A' && cSrc[i] <= 'Z'  || cSrc[i] >= 'a' && cSrc[i] <= 'z' ||cSrc[i] >= '0' && cSrc[i] <= '9' || cSrc[i] == 32))
        {
            Sp_Cnt++;
        }
        i++;
    }

    return Sp_Cnt;
}
