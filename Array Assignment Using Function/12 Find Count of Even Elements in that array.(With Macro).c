//12 Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Even Elements in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Even_Count(int[]);
int main()
{
    int Num[Size] = {} , Ret = 0 ;

    Accept_Element(Num);
     printf("\n\n Press Any Key To Display The Elements ....");
     getch();

    system("cls");
    Display_Element(Num);

    printf("\n\n===== Even Count Of Element In That Array ========");

    Ret = Even_Count(Num);

    printf("\n\nPress Any Key To Find Even Count ...");
    getch();

    printf("\n\n The Even Count Of Element In That Array = %d ",Ret);

    printf("\n\n Thanks !!!!!");

    getch();
    return 0;
}
void Accept_Element(int Arr[])
{
    int i = 0;
    for( i = 0 ; i < Size ; i++)
    {
        printf("\n Enter %d Element = ",i);
        scanf("%d",&Arr[i]);
    }
    return ;
}
void Display_Element(int Arr[])
{
    int i =  0;

    for( i = 0 ; i < Size ; i++)
    {
        printf("\n The %d Element In The Array = %d", i , Arr[i]);
    }
     return 0;
}
int Even_Count(int Arr[])
{
    int i = 0 , Ecnt = 0;

    for( i = 0 ; i < Size ;i++)
    {
        if(Arr[i] % 2 == 0)
        {
            Ecnt++;
        }
    }
    return Ecnt;
}
