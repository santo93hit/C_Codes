#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100],s1[100];
    int i,j,len,len1;
    printf("enter the 1st string:");
    gets(s);
    printf("enter the second string:");
    gets(s1);
    len=strlen(s);
    len1=strlen(s1);
    if(len==len1){
        for(i=0;i<len;i++){
            for(j=0;j<len1;j++){
                if(s[j]==s[i])
                    break;
            }
        }
        printf("the string is anagram\n");
        printf("%s    %s ",s1,s);
    }
    else
    {
        printf("string are not anagram");
    }
}
