#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t; scanf("%d", &t);
    int n; scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("%d is deleted\n", arr[n-1]);
    if (n == 1) printf("Array is Empty\n");
    else for (int i = 0; i < n-1; i++) printf("%d ", arr[i]);
}