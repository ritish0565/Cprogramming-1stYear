#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,a[20],l1,l2;
    int n;
printf("Entr the size");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
l1=l2=INT_MIN;
for(i=0;i<n;i++)
{
    if(a[i]>l1)
    {
        l2=l1;
        l1=a[i];

    }
    else if(a[i]<l1 && a[i]>l2)
    {
        l2=a[i];
    }
}
printf("%d is the second largest element in the array",l2);

}