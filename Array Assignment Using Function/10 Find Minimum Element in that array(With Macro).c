//10 Create, Accept, Display Array Using Loop - with macro ,
//Find Minimum Element in that array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Min_Element(int[]);

int main()
{
    int Num[Size]={}, Ret = 0;

    Accept_Element(Num);

    printf("\n\n Press Any Key To Display Element....");
    system("cls");

    Display_Element(Num);

    Ret = Min_Element(Num);

    printf("\n\n Press Any Key To Find Minimum Element ......");
    getch();

    printf("\n\n The Minimum Element In That Array Is = %d ",Ret);

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
int Min_Element(int Arr[])
{
    int i = 0 , Min = 0 , No = 0;

    for( i = 0 ; i<Size ; i++)
    {
        if(i == 0)
        {
            Min = Arr[i];
            continue;
        }
        if( Min > Arr[i])
        {
            Min = Arr[i];
        }
    }

    return Min;
}
