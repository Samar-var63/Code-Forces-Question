#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int a=arr[0],b=arr[0];
	for(int i=0;i<n-1;i++){
		if(arr[i+1]>a){
			c++;
			a=arr[i+1];
		}
		else if(arr[i+1]<b){
			c++;
			b=arr[i+1];
		}
	}
	cout<<c;
}