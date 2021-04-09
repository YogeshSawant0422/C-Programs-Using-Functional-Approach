// To Find The Count Of Capital Letters In Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0 ,Cap_Cnt = 0;

    printf("\n Enter Given String = ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            Cap_Cnt++;
        }
        i++;
    }
    printf("\n Enter A Count Of Capital Letters In Given String : %d", Cap_Cnt);

    printf("\n\n Thanks !!!!!");
    getch();
    return 0;
}
