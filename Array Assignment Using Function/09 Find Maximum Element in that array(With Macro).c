//09 Create, Accept, Display Array Using Loop - with macro ,
//Find Maximum Element in that array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Max_Element(int[]);

int main()
{
    int Num[Size]={}, Ret = 0;

    Accept_Element(Num);

    printf("\n\n Press Any Key To Display Element....");
    system("cls");

    Display_Element(Num);

    Ret = Max_Element(Num);

    printf("\n\n Press Any Key To Find Maximum Element ......");
    getch();

    printf("\n\n The Maximum Element In That Array Is = %d ",Ret);

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
    return;
}
void Display_Element(int Fun[])
{
    int i =0 ;
    for( i =0 ; i<Size ;i++)
    {
        printf("\n The %d Element In The Array = %d", i ,Fun[i]);
    }
    return ;
}
int Max_Element(int Arr[])
{
    int i = 0 , Max = 0 , No = 0;

    for( i = 0 ; i<Size ; i++)
    {
        if( i == 0)
        {
            Max = Arr[i];
            continue;
        }
        if(Arr[i] > Max )
        {
            Max = Arr[i];
        }
    }

    return Max;
}
