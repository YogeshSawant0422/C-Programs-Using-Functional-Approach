//Pointer Arithmetic - Increment
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {15,59,88,27,65};
    int *ptr = Num;

    printf("\n Base Address Of Array Is %d ",Num);
    printf("\n Value In Pointer is = %d",ptr);
    printf("\n Value Of Array Element Where Pointer Pointing = %d",*ptr);

    getch();

    ptr++;

    printf("\n\n New Value In Pointer Is %d ",ptr);
    printf("\n Value Of Array Element Where Pointer Pointing = %d",*ptr);

    getch();
    return 0;
}
