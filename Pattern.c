#include <stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int k=1;
int space=n;
for (int i = 1; i <= 2*n-1; i++)
{
    for (int j = 1; j < space; j++)
    {
        printf(" ");
    }
    
    for (int j = 0; j < k; j++)
    {
         if (i%2==1)
        {
            printf("#");
        }
        else
printf("-");
    }
    if (i<n)
    {
      k=k+2;
    space --;
    }
    else{k=k-2;
    space ++;}
    
    printf("\n");
}




    return 0;
}