//Mobile Number Validation Without Function
#include<stdio.h>
#include<conio.h>

int main()
{
    long long int Mob_Number = 0  , Temp = 0  ;
    int Dig = 0 , Cnt = 0 ;

    printf("\n Enter A Mobile Number To Find It Is Valid OR Not = ");
    scanf("%lld",&Mob_Number);

    if(Mob_Number >= '0'  || Mob_Number <= '9')
    {

            printf("\n To Find The Digit Count Of Given Number . ==>> \n Press Any Key To Continue");
            _getch();

            Temp = Mob_Number;

             if(Mob_Number == 0)
             {
                 printf("\n\nInvalid Number !!!!");return -1;
             }

            while( Temp > 0)
            {
                Dig = Temp % 10;
                Cnt++;
                Temp = Temp / 10;
            }

            printf("\n\n The Digit Count Of The Given Number Is = %d ",Cnt);

            if( Cnt == 10)
            {
                printf("\n\n So Given Number Is Valid Mobile Number .\n\nI Will Call You On This Number .");
            }
            else
            {
                printf("\n\n Given Number Is Not Valid For Mobile Number .\n\n So Nothing Can Be Done With This Mobile Number.");
            }
    }
    else
    {
        printf("\n Invalid Input !!! There Is No Integer Number .");
    }

    printf("\n\n=================== Thanks For Using This Application ==================");
    _getch();
    return 0;
}
