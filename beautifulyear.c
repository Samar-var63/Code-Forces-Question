#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    for(int )
        int a=(year%10);
        int b=(year/10)%10;
        int c=(year/100)%10;
        int d=(year/1000);
        if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)){
            printf("%d",year);
            break;
        }
        year++;
    }
}