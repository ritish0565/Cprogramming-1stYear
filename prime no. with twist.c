void printPrimes(int a, int b)
{
 int i,j,c,x=0;
  for(i=a;i<=b;i++)
  {
    c=0;
    for(j=1;j<=i;j++)
    {
      if(i%j==0)
        c++;
    }
  
  if(c==2)
  {
    printf("%d ",i);
    x++;
  }
  else if(x==0)
  {
    printf("-1");
    break;
  }
}
}