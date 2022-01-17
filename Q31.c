#include<stdio.h>
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
    int p[12][2];
    int idx=0;
    char input[50];
    char word[4];
    while(fgets(input,50,stdin)!=NULL){
        char *ptr=input;
        while((ptr=getword(ptr,word))){
            int tmp=atoi(word);
            for(int i=0;i<idx;i++){
                if(tmp==p[i][0]){
                    p[i][1]++;
                }
            }
        }
    }
}
