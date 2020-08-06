#include<stdio.h>
int a_c(int[], int);
int c_c(int[], int);
//int print(int [],int );

int main()
{
    int size, a[100], i, num, j;
    char r;
    printf("Enter size of array\n");
    scanf("%d\n", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    //printf("Enter the number of queries \n");
    //scanf("%d\n",&num);
    //for(j=0;j<num;j++)
    //{  //label:
    printf("\nEnter the way of rotation");
    scanf(" %c\n", &r);
    if (r == 'a')
    {
        a_c(a, size);
    }
    else if (r == 'c')
     {
            c_c(a, size);
    } // else if
    // {
    //     printf("wrong input,Enter again\n");
      //   goto label;
     //}
  //}

}
int a_c(int a[], int n)
{
    int num, temp, i , j;
    printf("Enter number of rotations ");
    scanf("%d", &num);
    for (j = 0; j < num; j++)
    {
        i = 0;
        temp = a[i];
        while (i < n - 1)
        {
            a[i] = a[i + 1];
            i++;
        }
        a[i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}
int c_c(int a[], int n)
{
    int temp, i, j, num;
    printf("enter the number of rotations");
    scanf("%d", &num);
    for (j = 0; j < num; j++)
    {
        temp = a[n - 1];
        i = n-1;
        
        while (i >= 0)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i+1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }

}