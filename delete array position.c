#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,n,p,x;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
    printf("Enter position whose element to be deleted ");
    scanf("%d",&p);
    x=a[p];
    printf("Deleted value is : %d ",x);
    for(i=p;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("Final array is \n ");
    for(i=1;i<=n;i++)
        printf("%d\n",a[i]);
    printf("now no. of elements becomes %d ",n);
    return 0;
}
