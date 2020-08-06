#include<stdio.h>
int main()
{
    int i,temp,p,c,n,count=-1,c1=-1,c2=-1;
    int a[100];
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(p=0;p<n-1;p++)
    { c2++;
        for(c=0;c<n-1-p;c++)
        { c1++;
            if(a[c]>a[c+1])
            { count++;
                temp=a[c];
                a[c]=a[c+1];
                a[c+1]=temp;
            }
        }
    }
    printf("\n the sorted array is:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n the number of passes = %d",c2);
    printf("\n the number of comparisons = %d",c1);
    
    printf("\n the number of total swaps = %d",count);
}
