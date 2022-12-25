#include <stdio.h>
#include <string.h>
int main() 
{
    int N, i, j, k;
    char word[100] = {0};
    int flag = 0, cnt = 0;
    scanf("%d", &N);
    
    for(i = 0; i < N; i++) {
        scanf("%s", word);
        for(j = 0; j < strlen(word); j++) {
            for(k = j+1; k < strlen(word); k++) {
                if(word[k] == word[j] && word[k] != word[j+1]) {
                    flag = 1;
                }
            }
        }
        if(flag == 0) {
            cnt++;
        } else {
            flag = 0;
        }
    }
    printf("%d", cnt);
}