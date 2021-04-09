//To Find The Count Of White Spaces In Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'};
    int i = 0 , Cnt = 0 ;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == 32)
        {
            Cnt++;
        }
        i++;
    }

    printf("\n Count Of Spaces In Given String Is : %d",Cnt);

    printf ("\n\n Thanks !!!!
            +");

    getch();
    return 0;
}
