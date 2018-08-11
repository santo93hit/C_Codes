#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    printf("enter the string:");
    gets(s);
    int i;
    int len=strlen(s);
    for(i=0;i<len;i++){
            if(s[i]==' ')
        s1[i]=s[i+1];
    }
    s1[len]='\0';
    puts(s1);
}

