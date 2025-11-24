#include<stdio.h>
int main(){
	int n,m,p;
	scanf("%d%d",&n,&m);
	
	for(int i=n+1;;i++){
		int c=1;
		for(int j=2;j<i;j++){
			if(i%j==0){
				c=0;
				break;
			}
		}
		if(c==1){
			p=i;
			break;
		}
	}
	if(p==m) printf("YES");
	else printf("NO");
	return 0;
}