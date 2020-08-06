#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int str[5][10],t[10];
    int p,c,i;
    for(i=0;i<5;i++)
    {
        scanf("%s",str[i]);
    }  
    
     
       
       for(p=0;p<4;p++)
       {
           for(c=0;c<4-p;c++)
           {
               if(strcmp(str[c],str[c+1])>0)
               {
                   strcpy(t,str[c]);
                   strcpy(str[c],str[c+1]);
                   strcpy(str[c+1],t);
               }
           }
       }
for(i=0;i<5;i++)
    {
        printf("%s  ",str[i]);
    }

}