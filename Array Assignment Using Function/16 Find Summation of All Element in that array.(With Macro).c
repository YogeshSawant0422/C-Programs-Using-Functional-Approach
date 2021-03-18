//Create, Accept, Display Array Using Loop - with macro ,
//Find Summation of All Element In That array .
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Summation(int[]);

int i = 0;

int main()
{
    int Num[Size] = {} , Ret = 0 ;

    Accept_Element(Num);
    printf("\n\n Press Any Key To Display Elements ....");
    getch();

    Display_Element(Num);

    printf("\n\n Press Any Key To Summation Of Array In The Element ....");
    getch();

    Ret = Summation(Num);
    printf("\n\nThe Summation Of All Elements In That Array Is = %d",Ret);

    printf("\n\n Thanks !!!");
    getch();
    return 0 ;
}
void Accept_Element(int Arr[])
{
    for( i = 0 ; i < Size ; i++)
    {
        printf("\n Enter %d Element = ", i);
        scanf("%d",&Arr[i]);
    }
    return ;
}
void Display_Element(int Arr[])
{
    for( i = 0 ; i < Size ;i++)
    {
        printf("\nThe %d Element In That Array = %d", i , Arr[i]);
    }
    return ;
}
int Summation(int Arr[])
{
     int Sum = 0;
    for( i = 0 ; i < Size ; i++)
    {
        Sum += Arr[i];
    }
    return Sum;
}
