#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1||n==2||n==12){
        printf("Winter\n");
    }
    else if(n==3||n==4||n==5){
        printf("Spring\n");
    }
    else if(n==6||n==7||n==8){
        printf("Summer\n");
    }
    else if(n==9||n==10||n==11){
        printf("Autumn\n");
    }
}
