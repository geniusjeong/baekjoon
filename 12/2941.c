#include <stdio.h>
#include <string.h>
int main()
{
    char num[100], i, cnt = 0;
    scanf("%s", num);
    
    for(i = 0; i < strlen(num); i++) {
        cnt = cnt + 1;
        if(num[i] == '=') {
            if(num[i-1] == 'c' || num[i-1] == 's') {
                cnt = cnt - 1;
            }
            if(num[i-1] == 'z') {
                cnt = cnt - 1;
                if(num[i-2] == 'd') {
                    cnt = cnt - 1;
                }
            }
        }
        if(num[i] == '-') {
            if(num[i-1] == 'c' || num[i-1] == 'd') {
                cnt = cnt - 1;
            }
        }
        if(num[i] == 'j') {
            if(num[i-1] == 'l' || num[i-1] == 'n') {
                cnt = cnt - 1;
            }
        }
    }
    printf("%d", cnt);
}