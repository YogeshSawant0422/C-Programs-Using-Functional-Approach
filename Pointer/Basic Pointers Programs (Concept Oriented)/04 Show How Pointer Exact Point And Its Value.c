// Show How Pointer Exact Point And Its Value
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21 , iNum = 55;
    int  *iptr1 = &iNo;
    int  *iptr2 = &iNo;

    printf("\n =============== 1st Pointer ================");

    printf("\n\n Value Of iNo = %d",iNo);
    printf("\n Address Of iNo = %d ",&iNo);
    printf("\n Value Of  iNo Using Its Pointer iPtr1 = %d",*iptr1);
    printf("\n Address Of iNo Using iPtr1= %d",iptr1);
    printf("\n Address Of iPtr1 =%d",&iptr1);

    printf("\n\n ============== 2nd Pointer =================");

    printf("\n\n Value Of iNum = %d",iNum);
    printf("\n Address Of iNum =%d",&iNum);
    printf("\n Value Of Variable Using Its Pointer iPtr2 = %d",*iptr2);
    printf("\n Address Of Variable Using iptr2 = %d",iptr2);
    printf("\n Address Of iptr2 = %d",&iptr2);

    printf("\n\n===============Thanks !!!!==================");

    getch();
    return 0;
}
