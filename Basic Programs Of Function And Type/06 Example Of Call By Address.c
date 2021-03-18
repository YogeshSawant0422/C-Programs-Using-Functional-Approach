// Example Of Call By Address
#include<stdio.h>
#include<conio.h>

void OriginalIncr(int*);

int main()
{
    int Num = 0;

    printf("\n Enter a value = ");
    scanf("%d",&Num);

    OriginalIncr(&Num);

    printf("\n\n Back Inside Main() ,\n\n Press Any Key To New Value !!!!");

    getch();
    printf("\n Value Of Given Number After Function Call = %d ",Num);
    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
void OriginalIncr(int *ip)
{

    printf("\n\n Welcome inside function , Value Received = %d ",*ip);

    (*ip)++;

    printf("\n\n Bye Bye Value Changed By Function = %d ",*ip);

}
