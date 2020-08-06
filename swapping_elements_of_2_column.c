#include<stdio.h>
int main()
{
int i,j,r,c,c1,c2;
scanf("%d %d",&r,&c);
int a[100][100];
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

printf("Enter the index of columns to be swapped");
scanf("%d %d",&c1,&c2);



for(i=0;i<r;i++)
{
    
        int temp=a[i][c1];
        a[i][c1]=a[i][c2];
        a[i][c2]=temp;
    
}

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

    return 0;
}