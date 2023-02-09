#include <stdio.h>
#include <stdlib.h>
int repeat (int arr[],int x);
int i; int j;
int main(){

    int x;
    printf("Enter the length of the array\n");
    scanf("%d", &x);
    int arr[x];
    printf("Enter the %d elements in the array\n", x);
    for ( i=0 ; i<x ; i++ ){
        printf("element %d: ",i);
        scanf("%d", &arr[i]);
    }
    repeat (arr,x);
}

repeat (int arr[],int x){
    printf("Repeating elements are:\n");
    for( i = 0 ; i < x-1 ; i++)
        for( j = i+1 ; j < x ; j++)
            if(arr[i] == arr[j])
                printf("%d  ", arr[i]);

}


