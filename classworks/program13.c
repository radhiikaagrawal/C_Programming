#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem=iNo%2;

    if(iRem == 0)
    {
        return true;
    } 
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;                   //return value of boolean is false


    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    
    printf("Result is:%d",bRet);

    return 0;
}