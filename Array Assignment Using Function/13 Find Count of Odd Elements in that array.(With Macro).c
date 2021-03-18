//Create,Accept, Display Array Using Loop - with macro ,
//Find Count of Odd Elements in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Odd_Count(int[]);

int main()
{
    int Num[Size] ={} , Ret = 0 ;

    Accept_Element(Num);
    printf("\n\n Enter Any  Key To Display The Elements....");
    getch();

    system("cls");

    Display_Element(Num);
    printf("\n\n Press Any Key To Find Odd Count....");
    getch();

    Ret = Find_OddCount(Num);
    printf("\n\n The Odd Count Of Element In The Array Is = %d",Ret);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
void Accept_Element(int Arr[])
{
    int i = 0 ;
    for( i = 0 ; i < Size ; i++)
    {
        printf("\n Enter %d Element = ", i);
        scanf("%d",&Arr[i]);
    }
    return ;
}
void Display_Element(int Arr[])
{
    int i = 0;
    for( i = 0 ; i < Size ; i++)
    {
        printf("\n The %d Element In The Array Is = %d",i , Arr[i]);
    }
    return ;
}
int Find_OddCount(int Arr[])
{
    int i = 0 , Ocnt = 0;
    for( i = 0 ; i < Size ; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            Ocnt++;
        }
    }
    return Ocnt;
}
