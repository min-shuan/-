#include<stdio.h>

int f(int n){
    if(n==0||n==1){
        return n+1;
    }
    else{
        return f(n-1)+f(n/2);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
}