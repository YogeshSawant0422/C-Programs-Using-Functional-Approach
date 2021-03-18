//11 Create, Accept, Display Array Using Loop - with macro ,
//Find Maximum & Minimum Element in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Find_Max(int[]);
int Find_Min(int[]);

int main()
{
    int Num[Size] = {} ,  Ret = 0 , Max = 0 , Min = 0;

    Accept_Element(Num);

    printf("\n Press Any Key To Display Elements ....");
    getch();
    system("cls");
    Display_Element(Num);

    printf("\n\n ===To Find The Maximum And Minimum Number====\n");
    printf("\n\n Please Enter Any Key ");
    getch();

    Max = Find_Max(Num);
    Min  = Find_Min(Num);

    printf("\n\n The Maximum Number In That Array Is = %d",Max);
    printf("\n\n The Minimum Number In That Array Is = %d",Min);

    printf("\n\n Thanks!!!!");

    getch();
    return 0 ;
}
void Accept_Element(int Arr[])
{
        int i = 0;
        for( i = 0 ; i<Size ; i++)
        {
            printf("\n Enter %d Element = " , i );
            scanf("%d",&Arr[i]);
        }
    return ;
}
void Display_Element(int Fun[])
{
    int i = 0 ;
    for( i = 0 ; i < Size ; i++)
    {
        printf("\n The %d Element Of Array = %d ", i , Fun[i]);
    }
    return ;
}
int Find_Max(int Arr[])
{
    int i = 0 , Max = 0;
    for( i = 0 ; i < Size ; i++)
    {
        if( i== 0)
        {
            Max = Arr[i];
            continue;
        }
        if( Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}
int Find_Min(int Arr[])
{
    int i = 0 , Min = 0;
    for( i = 0 ; i < Size ; i++)
    {
        if( i == 0)
        {
            Min = Arr[i];
            continue;
        }
        if( Arr[i]<Min)
        {
            Min = Arr[i];
        }
    }
        return Min;
}
