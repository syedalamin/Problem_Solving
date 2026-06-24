#include<stdio.h>

int fec(int n){
    if(n==1){
        return 1;
    }

    int cnt = fec(n-1);

    return cnt * n;
    
}

int main(){
    int n;
    scanf("%d", &n);

    int ans = fec(n);

    printf("%d", ans);
}