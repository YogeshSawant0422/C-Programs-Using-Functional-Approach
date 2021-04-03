//Find String Length Using For Loop V2
#include<stdio.h>
#include<conio.h>

int main()
{
    char CArr[50] = {'\0'};

    int i = 0;

    puts("\n Enter A String : ");
    gets(CArr);

    for( i = 0 ; CArr[i] != '\0';i++);

    printf("\n Length Of Given String Is = %d ",i);

    getch();
    return 0;
}
