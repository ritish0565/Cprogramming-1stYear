#include<stdio.h>
//#include<limits.h>

int main()

{
    int a[100][100],i,j,r,c,p,b;
    scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);

    }
}

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",a[i][j]);

    }
    printf("\n");
}

//int b=INT_MIN;
for(i=0;i<c;i++)
{ p=0;b=0;
    for(j=0;j<r;j++)
    {
        //b=a[j][i];
        if(a[j][i]>b)
        {b=a[j][i]; 
        p=j;
        }
    }
    //printf("%d ",b);
    printf("\n%d is the largest element in column %d and its row index is %d\n",b,i,p);
}


}
