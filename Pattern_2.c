#include <stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int k=1;
int space=n-1;
int s=1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j < space; j++)
    {
        printf(" ");
    }
    
    for (int j = s; j >=k; j--)
    {
        
      printf("%d",j);
    }
   
    space --;
    s++;
    
    printf("\n");
}




    return 0;
}