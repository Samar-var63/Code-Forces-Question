#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	if(n%2!=0){
		cout<<"-1";
	}
	else{
		int a[n],p=0;
		for(int i=1;i<=n;i++){
			a[p]=i;
			p++;
		}
		for(int i=0;i<p;i++){
			int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			i++;
		}
		for(int i=0;i<p;i++){
			printf("%d ",a[i]);
		}
	}
}