#include<stdio.h>
int main()
{
    int n,i,j,key;
    int a[]={34,12,70,35,89,18};
    n=sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("Array after sorting ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}