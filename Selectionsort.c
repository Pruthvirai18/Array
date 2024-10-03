#include<stdio.h>
int main()
{
    int min;
    int a[]={34,27,89,23,18};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    printf("Sorted array is");
    for(int i=0;i<n;i++)
    printf(" %d ",a[i]);
    return 0;
}