//Find The Count Of Vowels In Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0  , Cnt = 0;

    printf("\n Enter A String = ");
    gets(cSrc);
     while(cSrc[i] != '\0')
     {
        if(cSrc[i] == 'A' || cSrc[i] == 'E'|| cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U' || cSrc[i] == 'a' || cSrc[i] =='e' || cSrc[i] =='i' ||cSrc[i] == 'o'|| cSrc[i] =='u')
        {
            Cnt++;
        }
        i++;
     }
    printf("\n  The Count Of  Vowels In Given String Is = %d  ",Cnt );
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
