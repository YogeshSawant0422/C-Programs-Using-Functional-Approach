//Basic String Program Using puts And gets
#include<stdio.h>
#include<conio.h>
int main()
{
    char CArr[50] = {'\0'};

    puts("\n Enter A String : ");
    gets(CArr);

    puts("\n Given String Is => ");
    puts(CArr);

    getch();
    return 0;
}
