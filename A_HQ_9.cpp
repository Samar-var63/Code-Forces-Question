#include<iostream>
using namespace std;
int main(){
	char str[100];
	scanf("%s",str);
	int flag=0;
	for(int i=0;str[i]!='\0';i++){
		if(int(str[i])==72 ||str[i]==81 ||str[i]==57){
			flag=0;
			break;
		}
		else{
			flag=1;
		}
	}
	if(flag==1){
		cout<<"NO";
	}
	else cout<<"YES";
}