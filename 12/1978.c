#include <stdio.h>
int main() {
    int num, i, j, n, cnt = 0;
    int flag = 0;
    scanf("%d", &num);
    for(i = 0; i < num; i++) {
        scanf("%d", &n);
        if(n != 1) {
            for(j = 2; j < n; j++) {
                if(n % j == 0) {
                    flag = 1;
                }
            }
            if(flag == 0) {
                cnt++;
            } else {
                flag = 0;
            }
        }
    }
    printf("%d", cnt);
}