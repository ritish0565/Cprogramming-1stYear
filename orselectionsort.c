#include<stdio.h>
int main()
{
    int size,a[100],i,j,mi,n,count=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=0;i<size;i++)
    { mi=i;count++;
        for(j=i+1;j<size;j++)
        { 
if(a[mi]>a[j])
mi=j;
        }
        int t=a[mi];
        a[mi]=a[i];
        a[i]=t;
        if(count==n)
        break;
    }
for(i=0;i<size;i++)
printf("%d ",a[i]);
}