//To Find The Count Of Digits In Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0 , D_Cnt = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <='9')
        {
            D_Cnt++;
        }
        i++;
    }
    printf("\n The Count Of Digits In Given String  Is = %d",D_Cnt);

    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}
