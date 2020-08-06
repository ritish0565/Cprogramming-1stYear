#include <stdio.h>
/* Include other headers as needed */
int main()
{ int num,m,i,ip,count=0,j;
  scanf("%d",&num);
  scanf("%d",&m);

 for(i=2;i<=num;i++)
  {
    ip=1;
      for(j=2;j<=i/2;j++)
    { 
     if(i%j==0)
      {
        ip=0;
        break;
      }
      
    }
   
    if(ip==1)
    {printf("%d\n",i);
     count++;
    
    }
    if(count==m)
      break;
    

 }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}