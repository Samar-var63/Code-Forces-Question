#include<stdio.h>
#include<string.h>
int main(){
	int num;
	scanf("%d",&num);
	char str[50];
	scanf("\n%s",str);
	int c=0,len=strlen(str);
	for(int i=0;i<len-1;i++){
		if(str[i]==str[i+1]){
			c++;
		}
	}
	printf("%d",c);
}