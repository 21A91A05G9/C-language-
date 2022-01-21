#include<stdio.h>
int digitcoumax(int num)
{
    int c=0,d;
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        c++;
    }
    return c;
}
void main()
{
    int arr[100],i, n,k=0,v=0;
    printf("input n :\t");
    scanf("%d",&n);
    printf("input arry\n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<n; i++)

    {
        if(k<digitcoumax(arr[i]))
        {
            k=digitcoumax(arr[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        if(digitcoumax(arr[i])==k)
        {
            v++;
        }
    }
    printf("no of dig with max dig count=%d",v);
}
