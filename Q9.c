#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}