#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s[100];
	fgets(s,100,stdin);
	int len=strlen(s)-1;
	int c=0;
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(s[i]==s[j]){
				c++;
				break;
			}
		}
	}
	if((len-c)%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
}