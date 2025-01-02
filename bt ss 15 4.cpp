#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    printf("nhap vao mot chuoi ");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string, "\n")]='\0';
    int cnt[256] = {0};
    for(int i = 0; i < strlen(string); i++){
        cnt[string[i]]++;
    }
    for(int i = 0; i < strlen(string); i++){
        if(cnt[string[i]] != 0){
            printf("%c: %d\n", string[i], cnt[string[i]]);
            cnt[string[i]] = 0;
        }
    }
    return 0;
}
