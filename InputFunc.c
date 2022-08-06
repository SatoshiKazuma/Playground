#include<stdio.h>
int intInput(char *prompt)
{
    int input;
    printf("%s", prompt);
    scanf("%d", &input);
    return input;
}
int main()
{
    int a = intInput("Enter a number: ");
    printf("You entered %d\n", a);
    return 0;
}

