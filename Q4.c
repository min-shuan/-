#include<stdio.h>

int main(){
    int h1,m1,h2,m2,cost;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    int t1=h1*60+m1;
    int t2=h2*60+m2;
    int tot=t2-t1;
    if(tot<=120){
        cost=(tot/30)*30;
    }
    else if(tot>120&&tot<=240){
        cost=((tot-120)/30)*40+120;
    }
    else if(tot>240){
        cost=((tot-240)/30)*60+120+160;
    }
    printf("%d\n",cost);
}
