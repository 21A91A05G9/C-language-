#include<stdio.h>
int  count(int *arr, int n,int *res)
{
    int i,c=0;
    // static int res[100];
    for(i=1; i<n-1; i++)
    {
        if(arr[i+1]%2 && arr[i-1]%2)
        {
            res[c]=arr[i];
            c++;
        }
    }
    res=c;
    return res;
}
void main ()
{
    int arr[100],i,n,c,res[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    c=count(arr,n,res);
    for(i=0; i<c; i++)
    {
        printf("%d ",res[i]);
    }
}

