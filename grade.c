#include<stdio.h>
void main()
{
int i,n,a[10],j;
printf("enter no of values\n");
scanf("%d",&n);
printf("enter  values\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\n",a[i]);
for(i=0;i<n;i++)
if(100>=a[i] && a[i]>90)
printf("A+\n");
for(j=97;j<103;j++)
printf("%c ",j);

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


