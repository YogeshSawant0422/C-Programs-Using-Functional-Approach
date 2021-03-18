//04 Crate Array of 7 Elements With Null(0) Initialization & Accept All Elements
//without Loop ,Display All Elements
#include<stdio.h>
#include<conio.h>

void Accept_Element(int[] ,int);
void Display_Element(int[],int );
int main()
{
    int Num[7] = {};

    Accept_Element(Num,7);

    printf("\n Back To Main() \n\n Press Any Key To Display All Elements ....\n\n");
    getch();

    Display_Element(Num,7);

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}
void Accept_Element(int Arr[],int Size)
{
    printf("\n Enter 0 Element = ");
    scanf("%d",&Arr[0]);
    printf("\n Enter 1 Element = ");
    scanf("%d",&Arr[1]);
    printf("\n Enter 2 Element = ");
    scanf("%d",&Arr[2]);
    printf("\n Enter 3 Element = ");
    scanf("%d",&Arr[3]);
    printf("\n Enter 4 Element = ");
    scanf("%d",&Arr[4]);
    printf("\n Enter 5 Element = ");
    scanf("%d",&Arr[5]);
    printf("\n Enter 6 Element = ");
    scanf("%d",&Arr[6]);

    return ;
}
void Display_Element(int Fun[],int Size)
{
    printf("\n The 0 Element  is = %d",Fun[0]);
    printf("\n The 1 Element  is = %d",Fun[1]);
    printf("\n The 2 Element  is = %d",Fun[2]);
    printf("\n The 3 Element  is = %d",Fun[3]);
    printf("\n The 4 Element  is = %d",Fun[4]);
    printf("\n The 5 Element  is = %d",Fun[5]);
    printf("\n The 6 Element  is = %d",Fun[6]);

    return ;
}
