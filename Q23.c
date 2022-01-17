#include<stdio.h>

int main(){
    int n,a1,a2,a3;
    scanf("%d,%d,%d,%d",&n,&a1,&a2,&a3);
    int tot=a1*15+a2*20+a3*30;
    if(tot>n){
        printf("0\n");
    }
    else{
        tot=n-tot;
        int a=tot/50;
        tot=tot%50;
        int b=tot/5;
        int c=tot%5;
        printf("%d,",c);
        printf("%d,",b);
        printf("%d\n",a);
    }
}