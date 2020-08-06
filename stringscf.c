#include<stdio.h>
void func(char [],int);
/*

char ch;
ch=getchar();  or   scanf("%c",&ch);

for unknown lengths of strings
int main()
{
    int n,i=0;
    char str[100];
    char ch;
     ch=getchar();
     while(ch!='*')                    //Entering the string usinf another temporary character
     {
        str[i]=ch;
        i++;
        scanf("%c",&ch);
     }
     str[i]='\0';
     printf("%s",str);
}

*/
int main()
{
char str[100];
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%c",&str[i]);
func(str,n);
}
void func(char str[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    printf( " %c ",str[i]);
    
}