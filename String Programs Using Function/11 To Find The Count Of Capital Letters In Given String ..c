// To Find The Count Of Capital Letters In Given String .
#include<stdio.h>
#include<conio.h>

int Cap_Count(char cSrc[])
{
    int i = 0 , Cap_Cnt = 0;
    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        Cap_Cnt++;
        i++;
    }
    return Cap_Cnt;
}
int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A  String : ");
    gets(Str);

    int Ret = Cap_Count(Str);

    printf("\n Count Of Capital Letters In Given String : %d", Ret);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
