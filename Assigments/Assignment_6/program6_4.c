#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    bool bAns;

    if(iNo1-iNo2 == 0 || iNo2-iNo1 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

    return bAns;
}

int main()
{
    int iValue1=0 ,iValue2=0,iValue3=0;
    int iRet=0;

    printf("Please enter number: ");
    scanf("%d %d %d",&iValue1 ,&iValue2 ,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of number is:%d",iRet);

    return 0;
}

//Time complexity:O(1)