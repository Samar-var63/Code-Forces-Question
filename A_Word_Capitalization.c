#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char word[1000];
	fgets(word,1000,stdin);
	word[0]=toupper(word[0]);
	puts(word);
}