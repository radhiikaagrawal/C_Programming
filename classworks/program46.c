//factors of 6

#include<stdio.h>

//wrong approach
void DisplayFactors(int iNo)
{
    if((iNo % 1) == 0)
    {
        printf("1\n");
    }
    if((iNo % 2) == 0)
    {
        printf("2\n");
    }
    if((iNo % 3) == 0)
    {
        printf("3\n");
    }
    if((iNo % 4) == 0)
    {
        printf("4\n");
    }
    if((iNo % 5) == 0)
    {
        printf("5\n");
    }
}

int main()
{
    int iValue1=0;

    printf("Enter first number:");
    scanf("%d",&iValue1);

    DisplayFactors(iValue1);

    return 0;
}