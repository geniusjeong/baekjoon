#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, i, j, k, temp;
    int *arr;
    
    scanf("%d", &N);
    arr = (int*)malloc(sizeof(int) * N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(j = 0; j < N; j++) {
        for(k = j; k < N; k++) {
            if(arr[j] > arr[k]) {
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for(i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
}