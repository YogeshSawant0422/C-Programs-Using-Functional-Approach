//Show How Pointer Exact Point And Its Value (V2)
#include<stdio.h>
#include<stdio.h>

int main()
{
    int iNo = 21 ,*iptr1 = &iNo ,*iptr2 = &iNo;

    printf("\n\n Value of iNo using its pointer iptr1 = %d",*iptr1);
    printf("\n Address of iNo Using iptr = %d",iptr1);
    printf("\n Address of iptr1 = %d",&iptr1);

    printf("\n\n Value of variable using its pointer iptr2 = %d",*iptr2);
    printf("\n Address of variable using iptr2 = %d",iptr2);
    printf("\n Address of iptr2 = %d",&iptr2);

    iNo = 55;

    printf("\n\n New value of iNo Using its pointer iptr1 = %d",*iptr1);
    printf("\n New value of variable using its pointer iptr2 = %d",*iptr2);

    *iptr1 = 101 ;

    printf("\n\n New value of iNo = %d",iNo);
    printf("\n Value of iNo Using its pointer iptr1 = %d",*iptr1);
    printf("\n Value of variable using its pointer iptr2 = %d",*iptr2);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
