// Example Of Call By Value
#include<stdio.h>
#include<conio.h>

void ValueIncr(int);

int main()
{
    int Num = 0;

    printf("\n Enter a value = ");
    scanf("%d",&Num);

    ValueIncr(Num);
    printf("\n\n Back Inside The Main ,\n\n Press Any Key To See New Value !!!!");

    getch();

    printf("\n\n Value Of Given Number After Function Call  = %d ",Num);

    getch();
    return 0;
}
void ValueIncr(int No)
{
    printf("\n\n Welcome Inside Function ,Value Received = %d ",No);

    No++;

    printf("\n\n Bye Bye Value Changed By Function = %d ",No);
    return ;
}
