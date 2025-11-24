#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char word[200];
	fgets(word,200,stdin);
	getchar();
	int lower=0,upper=0;
	for(int i=0;word[i]!='\0';i++){
		if(isupper(word[i])){
			upper++;
		}
		else lower++;
	}
	lower--;
	if(upper>lower){
		for(int i=0;word[i]!='\0';i++){
			word[i]=toupper(word[i]);
		}
	}
	else{
			for(int i=0;word[i]!='\0';i++){
			    word[i]=tolower(word[i]);
		    }
		
	}
	puts(word);
}