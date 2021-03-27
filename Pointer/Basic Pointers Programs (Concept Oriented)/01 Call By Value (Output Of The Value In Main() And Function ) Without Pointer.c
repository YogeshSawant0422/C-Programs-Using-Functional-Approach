//Call By Value (Output Of The Value In Main() And Function ) Without Pointer
#include<stdio.h>
#include<conio.h>

void ValueIncr(int);

int main()
{
    int Num = 0;
    printf("\n Enter A Value = ");
    scanf("%d",&Num);

    ValueIncr(Num);

    printf("\n\n Back Inside The Main ,\n Press Any Key To See New Value !!!!!");

    getch();

    printf("\n\n OUTPUT = Value Of Given Number After Function Call = %d ",Num);
    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}

void ValueIncr(int No)
{
    printf("\n\n Welcome Inside A Function ,\n Value Received By = %d",No);

    No++;

    printf("\n\n Bye Bye Value Changed By The Function = %d ",No);

    return ;
}
