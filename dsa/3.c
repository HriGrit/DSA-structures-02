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
    
    for (int i = 0; i < n; i++){
        if (arr[i] == tar){
            if (n > t) printf("Array is Full\n");
            else{
                for (int j = n-1; j > i; j--){
                    arr[j+1] = arr[j];
                }
                arr[i+1] = element;
                for (int k = 0; k <= n; k++)
                    printf("%d ", arr[k]);
            }
            return 0;
        }
    }
    printf("Target Element Not Found\n");
    for (int k = 0; k < n; k++)
        printf("%d ", arr[k]);
    return 0;
}