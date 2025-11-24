#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int c=0,b=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			if(j==0){
				c-=arr[i][j];
				if(b<c) b=c;
			}
			else{
				c+=arr[i][j];
				if(b<c) b=c;
			}
		}
	}
	cout<<b;
}