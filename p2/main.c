#include <stdio.h>
#include <stdlib.h>

int main()
{int i;

    int x,y,z;
    printf("Enter the length of the array\n");
    scanf("%d", &x);
    int arr[x];
    printf("Enter the %d elements in the array\n", x);
    for ( i=0 ; i<x ; i++ ){
        printf("element %d: ",i+1);
        scanf("%d", &arr[i]);
    }


    y=z=arr[0];
    for( i=0; i<x; i++)
    {
        if (y<arr[i]){
            z=y;
            y=arr[i];
        }
    }


    printf ("The array is:\n ");
    for ( i=0 ; i<5 ; i++ ){
        printf("%d  ", arr[i]);
    }
    printf("\nthe second largest element in an array is: %d ",z);

}
