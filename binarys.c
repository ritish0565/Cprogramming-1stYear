#include<stdio.h>
int main()
{
    int a[100];
    int s,count=0;
    scanf("%d",&s);
    int e,b,m,i=0,item;
    for(i=0;i<s;i++)
    scanf("%d ",&a[i]);
    scanf("%d",&item);
    b=0;
    e=s-1;
   // m=(e+b)/2;
    while(b<e)
    {
        m=(e+b)/2;
    if(item>a[m])
    {
        b=m;
        e=s;
    }
    else if(item<a[m])
    {
        b=0;
        e=m;
    }
    else if(item==a[m])
    {
      printf("found");
      break;
    }
    
    }
    
    
}