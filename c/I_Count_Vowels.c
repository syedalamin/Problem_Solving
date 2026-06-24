#include<stdio.h>


int cnt = 0;
void rec(char s[], int i){
    if(s[i] == '\n'){
        return;
    }

    if(s[i] == 'a' || s[i] == 'e'||s[i] == 'i'|| s[i] == 'o' || s[i] == 'u'){
        cnt++;
    }

    rec(s, i+1);

}

int main(){
    char s[201];

    fgets(s, 201, stdin);


    rec(s, 0);

    printf("%d", cnt);

    return 0; 
}