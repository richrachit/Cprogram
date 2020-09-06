#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[13],i,n,x,p,f=0;
    int low,mid,high;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array element :\n");
    for(i=0;i<n;i++);
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be scearched :");
    scanf("%d",&x);
    low=0;high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x<a[mid])
            high=mid-1;
        else if (x>a[mid])
            low=mid-1;
        else {
            p=mid;
            f=1;
            break;
        }
    }
    if (f==1)
        printf("%d found at %d position",x,p+1);
    else
        printf("%d not found",x);

    return 0;
}
