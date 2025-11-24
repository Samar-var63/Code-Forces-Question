#include<iostream>
#include<string.h>
using namespace std;
int main(){
	 char s1[200];
	 char s2[200];
	 fgets(s1,200,stdin);
	 //getchar();
	 fgets(s2,200,stdin);
	 int len=strlen(s1);
	 int a1[200],a2[200],r[200];
	 for(int i=0;s1[i]!='\0';i++){
	 	a1[i]=s1[i];
	 }
	 for(int i=0;s2[i]!='\0';i++){
	 	a2[i]=s2[i];
	 }
	 for(int i=0;i<len;i++){
	 	if(a1[i]==a2[i]){
	 		r[i]=0;
		 }
		 else{
		 	r[i]=1;
		 }
	 }
	 for(int i=0;i<len-1;i++){
	 	printf("%d",r[i]);
	 }
}