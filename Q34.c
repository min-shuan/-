#include<stdio.h>

int main(){
    int w,n;
    while(scanf("%d%d",&w,&n)!=EOF){
        if(n==1){
            printf("%.1f\n",(w-80)*0.7);
        }
        else if(n==2){
            printf("%.1f\n",(w-70)*0.6);
        }
    }
    
}