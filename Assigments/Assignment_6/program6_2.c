#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    bool bAns;

    if(iNo>100)
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
    int iValue=0;
    bool bRet=false;

    printf("Please enter number: ");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}

//Time complexity:O(1)