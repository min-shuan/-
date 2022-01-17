#include<stdio.h>  
  
int main(){  
    int m,d;  
    scanf("%d%d",&m,&d);  
    if(m==1){  
        if(d<21){  
            printf("Capricorn\n");  
        }  
        else{  
            printf("Aquarius\n");  
        }  
    }  
    else if(m==2){  
        if(d<19){  
            printf("Aquarius\n");  
        }  
        else{  
            printf("Pisces\n");  
        }  
    }  
    else if(m==3){  
        if(d<21){  
            printf("Pisces\n");  
        }  
        else{  
            printf("Aries\n");  
        }  
    }  
    else if(m==4){  
        if(d<21){  
            printf("Aries\n");  
        }  
        else{  
            printf("Taurus\n");  
        }  
    }  
    else if(m==5){  
        if(d<22){  
            printf("Taurus\n");  
        }  
        else{  
            printf("Gemini\n");  
        }  
    }  
    else if(m==6){  
        if(d<22){  
            printf("Gemini\n");  
        }  
        else{  
            printf("Cancer\n");  
        }  
    }  
    else if(m==7){  
        if(d<23){  
            printf("Cancer\n");  
        }  
        else{  
            printf("Leo\n");  
        }  
    }  
    else if(m==8){  
        if(d<24){  
            printf("Leo\n");  
        }  
        else{  
            printf("Virgo\n");  
        }  
    }  
    else if(m==9){  
        if(d<24){  
            printf("Virgo\n");  
        }  
        else{  
            printf("Libra\n");  
        }  
    }  
    else if(m==10){  
        if(d<24){  
            printf("Libra\n");  
        }  
        else{  
            printf("Scorpio\n");  
        }  
    }  
    else if(m==11){  
        if(d<23){  
            printf("Scorpio\n");  
        }  
        else{  
            printf("Sagittarius\n");  
        }  
    }     
    else if(m==12){  
        if(d<22){  
            printf("Sagittarius\n");  
        }  
        else{  
            printf("Capricorn\n");  
        }  
    }  
      
}  