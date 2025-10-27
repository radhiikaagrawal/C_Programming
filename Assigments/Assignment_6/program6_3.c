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
    int iValue1=0 ,iValue2=0;
    bool bRet=false;

    printf("Please enter two number: ");
    scanf("%d %d",&iValue1 ,&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;
}

//Time complexity:O(1)