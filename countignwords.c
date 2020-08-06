#include<stdio.h>
#include<string.h>
int count(char []);
int main()
{
   int n,i=0;
    char str[100];
   //gets(str); 
            scanf("%[^\n]s",str);
     printf("%s",str);
     int w=count(str);
     printf(" %d",w);
    
}
int count(char a[])
{
/*  int i,word=1;
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ' && a[i+1]==' ')
        word=word+1;
        else if( a[i]=='\n')
        {
            word=0;
            break;
        }
    }
return word;*/
int i,word=0;
i=0;
while(a[i]!='\0')
{
    if(a[i]!=' ')
    {
        if(a[i+1]==' ' || a[i+1]=='.' || a[i+1]=='-' || a[i+1]=='\0')
        word++;
    }
}
return word;
}
