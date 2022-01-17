#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

char *getword(char *text, char *word){
    char *ptr=text, *qtr=word;
    while((*ptr)&&(isspace(*ptr))){
        ptr++;
    }
    while((*ptr)&&(!isspace(*ptr))){
        *qtr++=*ptr++;
    }
    *qtr='\0';
    if(word[0]==0){
        return NULL;
    }
    else{
        return ptr;
    }
    
}

int main(){
    char input[100];
    int idx=0;
    float sum=0;
    char word[100];
    char *ptr;
    fgets(input,100,stdin);
    ptr=input;
    while((ptr=getword(ptr,word))){
        int num=atoi(word);
        sum=sum+num;
        idx++;
    }
    printf("Size:%d\n",idx);
    printf("Average:%.3f\n",sum/idx);
}