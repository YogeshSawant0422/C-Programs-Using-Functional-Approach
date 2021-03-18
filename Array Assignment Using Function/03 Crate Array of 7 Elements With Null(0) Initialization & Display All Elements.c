//03 Crate Array of 7 Elements With Null(0) Initialization & Display All Elements
#include<stdio.h>
#include<stdio.h>

 void Display_Element(int[], int);

int main()
{
    int Num[7] = {};

    Display_Element(Num , 7);

    printf("\n\n Thanks !!!!!");
    getch();
    return 0;
}
void Display_Element(int Arr[], int Size)
{
    printf("\n Enter 0 Element = %d",Arr[0]);
    printf("\n Enter 1 Element = %d",Arr[1]);
    printf("\n Enter 2 Element = %d",Arr[2]);
    printf("\n Enter 3 Element = %d",Arr[3]);
    printf("\n Enter 4 Element = %d",Arr[4]);
    printf("\n Enter 5 Element = %d",Arr[5]);
    printf("\n Enter 6 Element = %d",Arr[6]);

    return;
}
