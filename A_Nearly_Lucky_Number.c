#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s",str);
	int c=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='4'|| str[i]=='7'){
			c++;
		}
	}
	if(c==4 || c==7) printf("YES");
    else printf("NO");
}

