#include<stdio.h>

int main()                     //enter point function
{
    int i=0 , j=0 ,ans=0;      //dyanmic output   //cui-command user interactions     //we store 0 because it when we store 0 is dont store garbbage value
    
    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    ans=i+j;  //buisness logic

    printf("Addition is :%d\n",ans);

    return 0;
}