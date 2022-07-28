#include <stdio.h>
int main()
{
 int a,b;
 printf("enter no of manipulated guards and total no of guards");
 scanf("%d%d",&a,&b);
 if (a>b || a==b)
 {
     printf("yes");
 }
 else
 {
     printf("no");

 }
}