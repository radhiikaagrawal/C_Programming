#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter your name:");
    //Name[strcspn(Name, "\n")] = '\0';
    fgets(Name, sizeof(Name), stdin);

    printf("Your name is :%s",Name);

    return 0;
}

//Time complexity:O(N)