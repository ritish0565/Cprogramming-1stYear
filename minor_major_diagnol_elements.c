#include <stdio.h>
int main()
{
     int a[3][3],i,j,k,s1=0,s2=0;
     printf("\nEnter Elements for Matrix of Size 3*3:\n\n");
     for(i=0;i<=2;i++)
          for(j=0;j<=2;j++)
          {
               scanf("%d",&a[i][j]);
          }
     printf("\n3*3 Matrix :\n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     /*printf("\nMajor Diagonal Elements : ");
     
     for(k=0;k<=2;k++)
     {
          printf("%d ",a[k][k]);
          s1=s1+a[k][k];
     }*/
     printf("\n\nsum of Minor Diagonal Elements : ");      
     /* prints the minor diagonal elements */
     /*for(i=0,j=2;i<=2&&j>=0;i++,j--)
     {
          printf("%d ",a[i][j]);
          s2=s2+a[i][j];
     }*/
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             if(i+j==2)
             {
                 s2+=a[i][j];
             }
         }
     }
     //printf("\n\nSum of Major Diagonal Elements : %d\n\n",s1);
     printf("Sum of Minor Diagonal Elements : %d\n\n",s2);
    /* if(s1==s2)
          printf(" Sum is SAME");
     else
          printf(" Sum is NOT SAME");
     return 0;*/
}