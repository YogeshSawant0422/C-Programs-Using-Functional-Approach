//01 Create Array Without Initialization & Display All Elements
#include<stdio.h>
#include<conio.h>

void Display_Array(int [],int );

int main()
{
    int Num[5] ;

    Display_Array(Num ,5);

     printf("\n\nAll Elements Shows Garbage Values .\n");
     printf("\n Thanks !!!!");;
    getch();
    return 0;
}
void Display_Array(int Arr[] , int size)
{
    printf("\n Enter 0 Element = %d",Arr[0]);
    printf("\n Enter 1 Element = %d",Arr[1]);
    printf("\n Enter 2 Element = %d",Arr[2]);
    printf("\n Enter 3 Element = %d",Arr[3]);
    printf("\n Enter 4 Element = %d",Arr[4]);

    return;
}
