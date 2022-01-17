#include<stdio.h>
#include<string.h>

int palindrome(char *str){
    int str_len=strlen(str);
    int is_palindrome=1;
    for(int i=0,j=str_len-1;i<str_len/2;i++,j--){
        
            if(str[i]!=str[j]){
                is_palindrome=0;
                break;
            }
    }
    return is_palindrome;
}

int main(){
    char n[10];
    scanf("%s",n);
    int test;
    test=palindrome(n);
    if(test==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}