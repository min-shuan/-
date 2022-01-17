#include<stdio.h>

int main(){
    int input[3][3];
    int state=0;
    for(int i=0;i<3;i++){
        scanf("%d%d%d",&input[i][0],&input[i][1],&input[i][2]);
    }
    for(int i=0;i<3;i++){
        if(input[i][0]==input[i][1]&&input[i][2]==input[i][1]){
            state=1;
            break;
        }
        else if(input[0][i]==input[1][i]&&input[2][i]==input[1][i]){
            state=1;
            break;
        }
    }
    if((input[0][0]==input[1][1]&&input[2][2]==input[1][1])||(input[0][2]==input[1][1]&&input[2][0]==input[1][1])){
        state=1;
    }
    if(state==1){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}