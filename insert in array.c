#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,n,p,x;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter array element: \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("enter position");
    scanf("%d",&p);
    printf("enter element to be inserted ie x:");
    scanf("%d",&x);
    for(i=n;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=x;
    n=n+1;
    printf("%d\n",a[i]);
    for (i=1;i<=n;i++)
        printf("%d\n",a[i]);
    printf("no. of element in array after insertion =%d",n);
    return 0;1
}
