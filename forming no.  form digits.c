int formNumber()
{
  int a,b=0,n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    b=b*10+a;
  }
    return b;/* Enter your code here. Read input from STDIN. Print output to STDOUT */
}