#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[20],i,n,s=0;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Sum of array elements is %d ",s);
    return 0;
}
