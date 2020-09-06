#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
  void bsort(int a[],int);
  int a[10],i,n;
  printf("enter n");
  scanf("%d",&n);
  printf("enter array \n");
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  bsort(a,n);
  printf("sorted array is \n");
  for(i=1;i<=n;i++)
    printf("%d\n",a[i]);
  getch();
}
void bsort(int a[], int n)
{
    int i,j,t;
    for(j=1;j<=n-i;j++)
    {
        if(a[j+1]<a[j])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
