#include<stdlib.h>
int main()
{
    int i,j,k,n,m;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-i;++j)
        {
            printf(" ");
        }
        m=i+1;
        for(k=1;k<=m;++k)
        {
            printf("%d",k);

        }
        for(k=+1;k>=1;-k)
        {
            printf("%d",k);
        }
        return 0;
    }









}
