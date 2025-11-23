#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    for(int i=year+1;;i++){
        int n=i;
        int a=(n%10);
        int b=(n/10)%10;
        int c=(n/100)%10;
        int d=(n/1000);
        if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)){
            printf("%d",n);
            break;
        }
    }
}