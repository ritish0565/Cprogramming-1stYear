#include<stdio.h>
int main()
{
    int k=0,f,g=0,i,j;
char str[50];
scanf("%s",str);
char check[50];
scanf("%s",check);
for(i=0;str[i]!='\0';i++)
{
    j=i;
    k=0;
    f=0;
    while(check[k]!='\0')
    {
        if(check[k]==str[j])
        {
            k++;
            j++;

        }
        else
        {
          f=1;
          break;
        }
        

    }
    if(f==0)
    {
        g=1;
        printf("Yes it is a subset");
        break;

    }
}
if(g==0)
{
    printf("Not a subset");
}
    return 0;
}