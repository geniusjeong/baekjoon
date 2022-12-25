#include <stdio.h>
int data[31][31];

int fac(int n, int r) {
    if(n == r || r == 0)
        return 1;
    if(data[n][r])
        return data[n][r];
    return data[n][r] = fac(n-1,r-1) + fac(n-1, r);
}
int main() {
    int num, i, n, r;
    scanf("%d", &num);
    
    for(i = 0; i < num; i++) {
        scanf("%d %d", &r, &n);
        printf("%d\n", fac(n, r));
    }
}