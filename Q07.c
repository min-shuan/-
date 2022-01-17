#include<stdio.h>

int main(){
    int x1,x2,y1,y2;
    char cmd[1];
    int num;
    scanf("%d",&num);
    scanf("/n");
    for(int i=0;i<num;i++){
        scanf("%c%d%d%d%d",cmd,&x1,&x2,&y1,&y2);
        printf("%c\n",cmd[0]);
        if(cmd[0]=='+'){
            printf("%d %d\n",x1+y1,x2+y2);
        }
        else if(cmd[0]=='-'){
            printf("%d %d\n",x1-y1,x2-y2);
        }
        else if(cmd[0]=='*'){
            printf("%d %d\n",(x1*y1)-(x2*y2),x2*y2);
        }
    }
}
