#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("enter the value of ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int k=1;
		for(j=1;j<=2*n-1;j++){
			if(j>=(n+1-i)&&j<=(n-1+i)&&k){
				printf("%d",i);
			k=0;
			}
			else{
				printf(" ");
				k=1;
			}
		
		}
			printf("\n");
			
	}
	return 0;
}
