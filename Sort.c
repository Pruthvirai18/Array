//Sort half of the  array in ascending and other half in descending order using Bubblesort
#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int a[]={34,12,70,35,89,100,50,18,27};
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n/2;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=n/2;i<n;i++)
    {
        for(j=n/2;j<n;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    return 0;
}
