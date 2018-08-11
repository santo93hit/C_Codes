#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0,len;
	char temp;
	char s[100];
	printf("enter the string:");
	gets(s);	
	j=strlen(s);
	while(i!=j){
		temp=s[j-1];
		s[j-1]=s[i];
		s[i]=temp;
		i++;
		j--;
	}
	puts(s);
}

