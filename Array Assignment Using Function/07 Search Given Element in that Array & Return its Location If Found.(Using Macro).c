//07 Create, Accept, Display Array Using Loop - with macro ,
//Search Given Element in that Array & Return its Location If Found
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Search_Element(int[],int);
int main()
{
    int Num[] = {} , Ret  = -1 ,Src_Ele = 0;

    Accept_Element(Num);

    printf("\n Back To Main()..\n Press any key to display elements ..");
    getch();

    system("cls");

    Display_Element(Num);

    printf("\n Enter Element For Searching In That Array = ");
    scanf("%d",&Src_Ele);

    Ret = Search_Element(Num , Src_Ele);

    if( -1 == Ret)
    {
        printf("\n Given %d Element Is Not Found In That Array ",Src_Ele);
    }
    else
    {
        printf("\n Given %d Element Is Found In That Array At %d Location ",Src_Ele,Ret +1);
    }

    printf("\nThanks !!!!!");

    getch();
    return 0;
}
void Accept_Element(int Arr[])
{
    int i = 0;

    for( i = 0 ; i < Size ; i++)
    {
        printf("\n Enter %d  Number Element = ",i);
        scanf("%d",&Arr[i]);
    }

    return ;
}
void Display_Element(int Arr[])
{
    int i = 0 ;

    for( i = 0 ; i < Size ; i++)
    {
        printf("\n The %d Element Is = %d", i , Arr[i]);
    }
     return ;
}
int Search_Element(int Arr[] , int Src_Ele)
{
    int i = 0;

    for( i = 0 ; i <Size ; i++)
    {
        if(Src_Ele == Arr[i])
        {
            break;
        }
    }
    if( i == Size )
    {
        i = -1;
    }
    return i ;
}
