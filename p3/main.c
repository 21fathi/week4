#include <stdio.h>
#include <stdlib.h>

int main()
{int i;

    int x,j;
    printf("Enter the length of the array\n");
    scanf("%d", &x);
    int arr[x];
    printf("Enter the %d elements in the array\n", x);
    for (i=0 ; i<x ; i++ ){
        printf("element %d: ",i);
        scanf("%d", &arr[i]);
    }


    printf("Unique elements are\n");
    for( i = 0 ; i < x ; i++) {
        for (j=0 ; j<i ; j++){
            if (arr[i] == arr[j])
                break;
        }
        if (i == j){
            printf("%d ", arr[i]);
        }
    }
}
