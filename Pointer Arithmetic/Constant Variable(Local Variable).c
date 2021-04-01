//Constant Variable(Local Constant)
#include<stdio.h>
#include<conio.h>

void Karad();

int main()
{
    const int Num = 100;   // Local Constant
    int p = Num - 50;

    printf("\n Value Of Num = %d",Num);
    printf("\n Value Of P = %d",p);

    Karad();
    getch();
    return 0;
}
void Karad()
{
    const int No = 50 ;       // Local Constant In Function Karad();
    printf("\n Value Of Local Const No is = %d",No);

    return ;

}
