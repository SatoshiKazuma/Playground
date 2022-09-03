#include <stdio.h>
int main()
{
    int tar, n;
    printf("Enter the target sum: ");
    scanf("%d", &tar);
    printf("Enter Array details\nSize: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        //printf("Element %d: ", i);
        scanf(" %d", &array[i]);
    }
    printf("Your input is\n target: %d, array: ", tar);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    int a, b, c, d;
    printf("n = %d\n", n);
    for (int i = 0; i < n; i++)
    {
        a = array[i];
        // printf("here");
        if (a == tar)
        {
            printf("%d=%d\n", a, tar);
            break;
        }
        {for (int j = 0; j < n; j++)
        {
            b = array[j];
            if (a + b == tar)
            {
                printf("%d+%d=%d\n", a, b, tar);
                break;
            }
            for (int k = 0; k < n; k++)
            {
                c = array[k];
                if (a + b + c == tar)
                {
                    printf("%d+%d+%d=%d\n", a, b, c, tar);
                    break;
                }
                for (int l = 0; l < n; l++)
                {
                    d = array[l];
                    if (a + b + c + d == tar)
                    {
                        printf("%d+%d+%d+%d=%d\n", a, b, c, d, tar);
                        break;
                    }
                }
            }
        }}
    }
    printf("The target of %d is not achievable by adding a combinations of any 4 elements in the given array\n", tar);
}