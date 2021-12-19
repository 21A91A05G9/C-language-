#include<stdio.h>

void main()
{
int a=2,b=3,c;
a++;
b--;
++a;
++b;
c=a--&&++b;
--c;
printf("%d,%d,%d",a,b,c);
}
//output=3,4,0