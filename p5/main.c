#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5];
    int i,j,sum=0;
    printf("Enter the 5*5 Array of integers ::\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n The array you entered is\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }

    //The Row Sum
    printf("\nThe Row sum is :: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            sum += arr[i][j];
        }
        printf("%d ",sum);
        sum = 0;
    }

    //The Column sum
    printf("\nThe Column sum is :: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            sum += arr[j][i];
        }
        printf("%d ",sum);
        sum = 0;
    }

    return 0;
}
