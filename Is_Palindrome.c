
#include <stdio.h>
#include <string.h>

int is_palindrome(char a[])
{
int sum=0;
int n=strlen(a);

 for (int i = 0; i < n; i++)
{
     if (a[i] != a[n - 1 - i])
     {
         sum=0;
         break;
    
 }
 else 
 sum++;
 }


return sum;

}
int main ()
{


char a[1001];
scanf("%s",a);
int result=is_palindrome(a);
if (result==0)
{
   printf(" Not Palindrome");
}
else
printf("Palindrome");
    return 0;
}
    