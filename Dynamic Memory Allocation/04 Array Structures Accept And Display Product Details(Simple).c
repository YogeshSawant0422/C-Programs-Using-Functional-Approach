//Array Structures Accept And Display Product Details(Simple)
#include<stdio.h>
#include<conio.h>

struct Product
{
    int P_ID ;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;
};
int main()
{

struct Product P_Arr[3];
int i = 0;

//Accept Product Details
printf("\n\n Accepting Product Details = \n");

//Loop To Accept Details
for( i = 0 ; i < 3 ;i++)
{
    printf("\n Enter %d Product ID = ",i + 1);
    scanf("%d",&P_Arr[i].P_ID);
    printf("\n Enter %d Product Name = ",i+1);
    scanf(" %[^\n]",&P_Arr[i].P_Name);
    fflush(stdin);
    printf("\n Enter %d Product Purchase Price = ",i + 1);
    scanf("%f",&P_Arr[i].P_P_Price);
    printf("\n Enter %d Product Sales Price = ",i + 1);
    scanf("%f",&P_Arr[i].P_S_Price);
}
system("cls");
printf("\n\n ==============***********==================");

//Display Product Details
printf("\n Display Product Details =>\n");

for( i = 0 ; i < 3 ; i++)
    {
        printf("\n %d Product Details =>\n\n ID = %d . \n Name = %s. \n Purchase Price = %0.2f . \n Sales Price = %0.2f \n", i+1,P_Arr[i].P_ID,P_Arr[i].P_Name,P_Arr[i].P_P_Price,P_Arr[i].P_S_Price);
    }
    printf("\n=================*************===================");
    printf("\n\n Thanks !!!!!");
    getch();
    return 0;

}
