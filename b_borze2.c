#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    scanf("%s",str);
    int i;
    int len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='.'){
            printf("0");
            
        }
        else if(str[i]=='-'){
            if(i+1<len && str[i+1]=='.'){
                printf("1");
                i++;
            }
            else if(i+1<len && str[i+1]=='-'){
                printf("2");
                i++;
            }
        }
    }
}

