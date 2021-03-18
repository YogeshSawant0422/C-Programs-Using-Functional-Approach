//Create, Accept, Display Array Using Loop - with macro ,
//Find Maximum & 2nd Maximum Element in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7
int i = 0;
void Accept_Element(int[]);
void Display_Element(int[]);
int First_Max(int[]);
int Second_Max(int[]);

int main()
{
    int Num[Size] = {} , Ret1= 0,Ret2 = 0;

    Accept_Element(Num);

    printf("\n Press Any Key To Display The Array Element......");
    getch();

    Display_Element(Num);

    printf("\n\n Enter Any Key To Find Out Max1 And Max2 In That Array ");
    getch();

    Ret1 = First_Max(Num);
    Ret2 =Second_Max(Num);

    printf("\n\n The Maximum Number In That Array Is = %d", Ret1);
    printf("\n\n The Second Maximum Number In That Array Is = %d", Ret2);

     printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
void Accept_Element(int Arr[])
{
        for( i = 0 ; i < Size ; i++)
        {
            printf("\n Enter %d Element = ",i);
            scanf("%d",&Arr[i]);
        }
        return ;
}
void Display_Element(int Arr[])
{
   for( i = 0 ; i < Size ; i++)
   {
      printf("\n The %d Element In The Array Is = %d", i , Arr[i]);
   }
   return ;
}
int First_Max(int Arr[])
{
    int Max = 0;
    for( i = 0 ; i < Size ; i++)
    {
        if( i == 0)
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
int Second_Max(int Arr[])
{
    int Max = 0 ; int Max2 = 0;

    Max = First_Max(Arr);

    for( i = 0 ; i < Size ; i++)
    {
        if( Max == Arr[i])
        {
            continue;
        }
        if( i == 0)
        {
            Max2 = Arr[i];
            continue;
        }
        if(Arr[i] > Max2 && Arr[i] != Max)
        {
            Max2 = Arr[i];
        }
    }
    return Max2;
}

