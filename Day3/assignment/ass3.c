#include<stdio.h>
int main()
{
int n,s,i,j;
printf("Enter the height of the pyramid: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ 
for(s=i;s<n;s++)
{
printf(" ");
}
for(j=1;j<=(2*i-1);j++)
{
printf("*");
}
printf("\n");
}
}