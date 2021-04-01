//Constant Variable(Local Constant) V2
#include<stdio.h>
#include<conio.h>

void Karad();
int gNum = 505;

int main()
{
    const int Num = 100;
    int P = Num - 50;

    printf("\n Value Of Num = %d",Num);
    printf("\n Value Of P = %d",P);
    printf("\n Value Of Global Variable gNum inside main() = %d",gNum);

    gNum = gNum +20;
    Karad();
    getch();
    return 0;
}
void Karad()
{
    const int No = 1001;
    printf("\n Value Of Local Const No Is = %d",No);
    printf("\n Value Of Global Variable gNum inside Karad() = %d",gNum);

    return ;
}
