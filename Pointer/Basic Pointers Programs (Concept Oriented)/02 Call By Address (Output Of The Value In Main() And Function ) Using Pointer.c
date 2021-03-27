//Call By Address (Output Of The Value In Main() And Function ) Using Pointer
#include<stdio.h>
#include<conio.h>

void OriginalIncr(int*);

int main()
{
    int Num = 0;

    printf("\n Enter A Value = ");
    scanf("%d",&Num);

    OriginalIncr(&Num);

    printf("\n\n Back Inside The Main ,\n Press Any Key To Continue ");

    getch();

    printf("\n\n Value Of Given Number After Function Call = %d ",Num);

    printf("\n\n Thanks !!!!!");
    getch();
    return 0;
}
void OriginalIncr( int *ip)
{
    printf("\n\n Welcome Inside A Function Value Received = %d",*ip);

    (*ip)++;

    printf("\n\n Bye Bye Value Changed By The Function = %d ",*ip);

    return ;
}
