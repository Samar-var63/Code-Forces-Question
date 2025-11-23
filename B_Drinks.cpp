#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	double sum=0.0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	double res;
	res=sum/n;
	printf("%.12lf",res);
}
