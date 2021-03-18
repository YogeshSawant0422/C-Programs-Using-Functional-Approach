//05 Crate Array of 7 Elements With Null(0) Initialization, Accept & Display All Elements with Loop
#include<stdio.h>
#include<conio.h>

void Accept_Element(int[],int);
void Display_Element(int[],int);

int main()
{
    int Num[7] = {};

    Accept_Element(Num , 7);

     printf("\n Back To Main() ..\n Please Enter Any Key To Display Element...\n");

     getch();

     Display_Element(Num,7);

     printf("\n\nThanks !!!!!");

     getch();
     return 0;
}
void Accept_Element(int Arr[] ,int Size)
{
    int i = 0;
    for( i = 0 ;i < Size ; i++)
    {
        printf("\n Enter %d Element = ", i );
        scanf("%d",&Arr[i]);
    }

    return 0;
}
void Display_Element(int No[] ,int Size)
{
    int i = 0;

    for( i = 0 ; i < Size ;i++)
    {
        printf("\n The %d Element Of Array Is = %d", i ,No[i] );
    }

    return 0;
}


