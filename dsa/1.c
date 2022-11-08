#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t; scanf("%d", &t);
    int n; scanf("%d", &n);
    
    int arr[n];
    
    if (n > t){
        printf("Array is Full\n");
        n = t;        
    }
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (int i = n-1; i >= 0; i--)
        printf("%d ", arr[i]);
        
    return 0;
}