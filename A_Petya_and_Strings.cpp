#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main(){
	char a[1000];
	char b[1000];
	scanf("%s",&a);
	scanf("%s",&b);
	for(int i=0;a[i]!='\0';i++){
		a[i]=tolower(a[i]);
	}
	for(int j=0;b[j]!='\0';j++){
		b[j]=tolower(b[j]);
	}
	int u=strcmp(a,b);
	cout<<u;
}