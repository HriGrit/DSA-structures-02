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
    
    int tar, element;
    scanf("%d %d", &tar, &element);
    
    if (n == t) printf("Array is Full\n");
    else{
        if (tar > n) printf("Position Not Found\n");
        else{
            for (int i = n-1; i >= tar; i--){
                arr[i+1] = arr[i];
            }
            arr[tar] = element;
            for (int k = 0; k <= n; k++)
                printf("%d ", arr[k]);
        }
    }
    return 0;
}