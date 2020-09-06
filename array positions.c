#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a [20],i,n,p,x;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("enter array elements: \n");
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
    x=a[p];
    printf("enter position whose element to be delete");
    for(i=p;i<n-1,i++)
    {
        a[i]=a[i+1];

    }

        n=n-1;
        printf("final array is \n");
        for(i=1;i<=n;i++)
            printf("%d\n",a[i]);
        printf("now no. of elements becomes %d",n);
        return 0;
}


