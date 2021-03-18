//15 Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Even & Odd & Zero Elements in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7
int i = 0;

void Accept_Element(int[]);
void Display_Element(int[]);
int Zero_Element(int[]);
int Even_Element(int[]);
int Odd_Element(int[]);

int main()
{
    int Num[Size] = {} , Even = 0 , Odd = 0 ,Zero = 0;

    Accept_Element(Num);

    printf("\n\nPress Any Key To Display Element....");
    getch();
    system("cls");

    Display_Element(Num);
    printf("\n\n Press Any Key For Display Zero Count , Even Count , Odd Count ...");
    getch();

    Zero = Zero_Element(Num);
    Even = Even_Element(Num);
   Odd = Odd_Element(Num);

    printf("\n\n The Zero Element Count In That Array Is = %d",Zero);
    printf("\n\n The Even Element Count In That Array Is = %d",Even);
    printf("\n\n The Odd Element Count In That Array Is = %d",Odd);

    printf("\n\n Thanks !!!!");

    getch();
    return 0 ;
}
void Accept_Element(int Arr[])
{
    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Enter %d Element = ", i);
        scanf("%d",&Arr[i]);
    }
    return ;
}
void Display_Element(int Arr[])
{
    for( i = 0 ; i < Size ; i++)
    {
        printf("\n The %d Element In That Array Is = %d",i ,Arr[i]);
    }
    return ;
}
int Zero_Element(int Arr[])
{
   int  Zcnt = 0;
   for( i = 0 ; i <Size ; i++)
   {
       if(Arr[i] == 0)
       {
           Zcnt++;
       }
   }
   return Zcnt;
}
int Even_Element(int Arr[])
{
    int Ecnt = 0;
    for( i = 0 ;  i < Size ; i++)
    {
        if(Arr[i] % 2 == 0 && Arr[i] != 0)
        {
            Ecnt++;
        }
    }
    return Ecnt;
}
int Odd_Element(int Arr[])
{
    int Ocnt = 0;
    for( i = 0 ; i < Size ; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            Ocnt++;
        }
    }
    return Ocnt;
}
