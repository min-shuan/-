#include<stdio.h>

int main(){
    int n,state=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            state=1;
            break;
        }
        else{
            continue;
        }
    }
    if(state==1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}
