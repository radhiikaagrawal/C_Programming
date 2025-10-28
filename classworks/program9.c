/*
Step 1:understand problem statement
Step 2:write algorithm
Step 3:decide programming langauge 
Step 4:write program
Step 5:test the program
*/

/*
  Algorithm

  Start
      Accept first number as no1
      Accept second number as no2
      If input is negative then convert it into positive 
      Perform addition of no1 and no2
      Display the addition/output on screen 

  Stop
*/


#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum=0.0f;

    //updator
    if(fNo1<0.0f)     
    {
        fNo1=-fNo1;   //convert negative number into positive
    }

    if(fNo2<0.0f)
    {
        fNo2=-fNo2;
    }

    fSum=fNo1+fNo2;        //business logic
    return fSum;
}

int main()
{
    float fValue1=0.0f , fValue2=0.0f ,fRet=0.0f;     
    
    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet=AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is :%f\n",fRet);

    return 0;
}