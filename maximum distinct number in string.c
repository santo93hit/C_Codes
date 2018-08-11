//find the maximum distinct number in a string of substring
#include<stdio.h>
#include<string.h>
int main(){
	int i,j,len;
	char s[100];
	printf("enter the string:");
	gets(s);
	puts(s);
	len=strlen(s);
	int ans=len;
	for(i=0;i<len;i++){
		int count=0;
		for(j=i+1;j<len;j++){
			if(s[j]==s[i]){
				count++;
			}
		}
		ans=ans-(count);
	}
	printf("ANSWER=>%d",ans);
	return 0;
	
}
