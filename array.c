#include<stdio.h>
void main()
{
int i,n,a[10];
printf("enter no of values\n");
scanf("%d",&n);
printf("enter  values\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\n",a[i]);
for(i=n-1;i>=0;i--)
printf("%d\n",a[i]);
}
/*
output:
enter no of values
2
enter  values
1 2
1
2
2
1
*/


