#include<stdio.h>
int main(){
    int arr[6][6];
    int i,j;
    for(i=01;i<6;i++){
        for(j=01;j<6;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int m,n;
    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            if(arr[i][j]==1){
                m=i,n=j;
            }
        }
    }
    int count=0;
    if(m>3){
    	count+=m-3;
	}
	else if(m<3){
		count+=3-m;
	}
	if(n<3){
		count+=3-n;
	}
	else if(n>3){
		count+=n-3;
	}
	printf("%d",count);
}


