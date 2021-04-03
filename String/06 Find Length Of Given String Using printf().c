//Find Length Of Given String Using printf()
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char cSrc[50] = {'\0'};

    int Len = 0;
    puts("\n Enter A String :");
    gets(cSrc);

    Len = printf("%s",cSrc);

    system("cls");
    printf("\n Length Of Given String Is = %d",Len);

    getch();
    return 0;
}

