#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	fgets(str,100,stdin);
	int c=0;
	for(int i=0;str[i]!='\n';i++){
		if(str[i]=='4'|| str[i]=='7'){
			c=0;
		}
		else{
			c=1;
			break;
		}
	}
	if(c==0) printf("YES");
	else printf("NO");
}

