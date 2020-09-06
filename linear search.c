#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[15],i,n,x,p,f=0;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array element :\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter element to be searched: ");
    scanf("%d",&x);
    i=1;
    while (i<n)
    {
        if(a[i]==x)
        {
            p=i;
            f=1;
            break;
        }
        else
            i=i+1;
    }
    if(f==1)
        printf("%d found at %d position",x,p+1);
    else
        printf("%d not found",x);
    return 0;
}
