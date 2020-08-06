#include <stdio.h>
/* Include other headers as needed */
int main()
{int a,b,c,d,e=0,k,i,sum;
 scanf("%d %d",&a,&b);
 for(c=a;c<=b;c++)
 {
   sum=0;
   k=c;
   d=c;
   while(k>0)
   {
     i=k%10;
     k/=10;
     sum=sum*10+i;
     
   }
   if(d==sum)
   {
     e++;
   }
 }
 printf("%d",e);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}