#include<stdio.h>

int main(){
    int n; // n denotes the number of forces.
    scanf("%d",&n);
    
    int sum[3]={0,0,0};
    
    for(int i=0;i<n;i++){
        int arr[3];
        scanf("%d\t%d\t%d",&arr[0],&arr[1],&arr[2]);
        for(int p=0;p<3;p++){
            sum[p]+=arr[p];
        }
    }
    if(sum[0]==0 && sum[1]==0 && sum[2]==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}