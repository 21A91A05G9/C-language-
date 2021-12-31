#include<stdio.h>
void main()
{
    int a,b,j,i,n,m,p=1,k,o,f,s,v;
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
        printf("%d",i);
    printf("\n"); 
    }
scanf("%d",&m);
    for(k=m;k>0;k--)
            printf("%d ",k);    
     printf("\n");
    for(p=1;p<=m;p++)
            printf("%d ",p*p);
     printf("\n");
    
scanf("%d",&o);
    for(s=1;s<=o/2;s++)
       {
           printf("%d ",s*2); 
       }
    printf("\n");
    for(s=1;s<=o/2;s++)
       {    
           f=(s*2)-1;
           printf("%d ",f);
       }
}
 
   /* 
    
    output:-
 in 3
    1
    22
    333
 in 6
    654321
    1,4,9,16,25,36,
 in 10
    246810 
    13579
 */
    
      