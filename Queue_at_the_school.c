#include<stdio.h>
#include<string.h>
int main(){
	int size,time;
	scanf("%d %d",&size,&time);
	getchar();
	char str[100];
	fgets(str,100,stdin);
	str[strcspn(str, "\n")] = '\0';
	int count=0,i,len=strlen(str);
	while(count<time){
		for(i=0;i<len-1;i++){
			if(str[i]=='B' && str[i+1]=='G'){
				char temp;
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
				i++;
			}
		}
		count++;
	}
	puts(str);	
	return 0;
}
