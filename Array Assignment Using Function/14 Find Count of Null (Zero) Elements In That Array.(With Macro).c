//Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Null (Zero) Elements In That Array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Zero_Element(int[]);

int main()
{
    int Num[Size] = {} , Ret = 0;

    Accept_Element(Num);
     printf("\n\n Press Any Key To Display  The Element ....");
     getch();
     Display_Element(Num);

     printf("\n\n Press Any Key To Count Of Zero Element .....");
     getch();

     Ret = Zero_Element(Num);

     printf("\n\n The Count Of Zero Element In That Array Is = %d",Ret);

     printf("\n\n Thanks !!!!");

     getch();
     return 0;
}
void Accept_Element(int Arr[])
{
    int i = 0;

    for( i = 0 ; i < Size ; i++)
    {
        printf("\n Enter %d Element = ", i );
        scanf("%d",&Arr[i]);
    }
    return ;
}
void Display_Element(int Arr[])
{
    int i = 0;
    for(i = 0; i < Size ; i++)
    {
        printf("\n The %d Element Of In That Array = %d", i ,Arr[i]);
    }
    return ;
}
int Zero_Element(int Arr[])
{
    int i = 0 , Cnt = 0;
    for( i = 0 ; i < Size ; i++)
    {
        if(Arr[i] == 0)
        {
            Cnt++;
        }
    }
    return Cnt ;
}
