#include<stdio.h>
int main()
{
    int i,j,n,a[10],temp;
    printf("Enter the size of the aray\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<=n/2;i++)
   {
    temp=a[i];
    a[i]=a[n/2+i];
    a[n/2+i]=temp;
   }

printf("Swapped array is");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}


