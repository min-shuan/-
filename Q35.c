#include<stdio.h>

void swap(int *x,int *y){
    int tmp=*y;
    *y=*x;
    *x=tmp;
}

int  bubble_sort(int *arr){
    for(int i=0;i<10;i++){
        for(int j=0;j<10-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr+j,arr+j+1);
            }
        }
    }
    return *arr;
}

int main(){
    int x;
    int input[10];
    for(int i=0;i<10;i++){
        scanf("%d",&x);
        input[i]=x;
    }
    bubble_sort(input);
    for(int i=0;i<9;i++){
        printf("%d ",input[i]);
    }
    printf("%d\n",input[9]);
}