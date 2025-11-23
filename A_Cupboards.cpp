#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int arr[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0,j=0;
	while(j<2){
		int x=0,y=0;
		for(int i=0;i<n;i++){
			if(arr[i][j]==0) x++;
			else y++;
		}
		if(x>=y) sum+=y;
		else sum+=x;
		j++;
	}
	cout<<sum;
}