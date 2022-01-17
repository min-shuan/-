#include<stdio.h>
#include<string.h>

int main(){
    float n;
    float max,min;
    scanf("%f",&n);
    max=n;
    min=n;
    for(int i=0;i<9;i++){
        scanf("%f",&n);
        if(n>max){
            max=n;
        }
        if(n<min){
            min=n;
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}