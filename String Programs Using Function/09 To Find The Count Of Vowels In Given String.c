//To Find The Count Of Vowels In Given String
#include<stdio.h>
#include<conio.h>

int V_Count(char *cSrc);

int main()
{
    char Str[20] = {'\0'};

    printf("\n Enter A String : ");
    gets(Str);

    int Ret = V_Count(&Str);

    printf("\n The Vowels Count Of Given String Is : %d ",Ret);
    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}
int V_Count(char *cSrc)
{
    int i = 0 ,V_Cnt = 0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U' ||cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u' )
        {
            V_Cnt++;
        }
        i++;
    }
    return V_Cnt;
}
