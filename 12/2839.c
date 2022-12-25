#include <stdio.h>
int main() {
    int N, i, j, small = 5001;
    scanf("%d", &N);
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(3 * i + 5 * j == N) {
                if(small > i + j) {
                    small = i + j;
                }
            }
        }
    }
    if(small == 5001) {
        printf("-1");
    } else {
        printf("%d", small);
    }
}