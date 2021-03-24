#include <iostream>
#include <string.h>

using namespace std;

char* reverse (char a[])
{
    char* ptr=a;
    int n=strlen(a);
    char b[n];
    for(int i=0;i<n;i++)
        b[i]=a[n-i-1];
    return b;
}

char* delete_char(char a[], char c){
    char *s=a;
    for(int i=0;i<strlen(a);i++){
        if(*(s+i)==c)
        {
            for(int j=i;j<strlen(a);j++)
                s[j]=s[j+1];
            i--;
        }
    }
    return s;
}

char* pad_right(char a[], int n){
    char *s=a;
    if(strlen(a)==n)
        return s;
    else{
        for(int i=strlen(a);i<n;i++)
            s[i]=' ';
        s[n]='\0';
        return s;
    }
}

char* pad_left(char a[], int n){
    char *s=a;
    if(strlen(a)>=n)
        return s;
    else
    {
    	int m=strlen(a);
    	for(int i=0;i<n-m;i++)
        {
    		for(int j=i+m;j>=i;j--)
    			s[j]=s[j-1];
			s[0]=' ';
		}
		s[n]='\0';
		return s;
    }
}

char* truncate(char a[], int n)
{
    char *s=a;
    if(strlen(a)<=n)
        return s;
    else
    {
        s[n]='\0';
        return s;
    }
}

char* trim_left(char a[])
{
    char *s=a;
    for(int i=0;i<strlen(a);i++)
    {
        if(*(s+i)!=' ')
            break;
        else
        {
            for(int j=i;j<strlen(a);j++)
                *(s+j)=*(s+j+1);
            i--;
        }
    }
    return s;
}

char* trim_right(char a[])
{
    char *s=a;
    for(int i=strlen(a)-1;i>=0;i--)
    {
        if(*(s+i)!=' ')
        {
            *(s+i+1)='\0';
            break;
        }
    }
    return s;
}
