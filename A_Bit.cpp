#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0,x=0;
	while(i<n){
		char a[20];
		scanf("%s",&a);
		if(a[1]=='+'){
			x++;
		}
		else{
			x--;
		}
		i++;
	}
	cout<<x;
}