#include<stdio.h>
int main()
{
    int n,i,j,key,temp;
    int a[]={34,12,70,35,89,100,50,18};
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Array after sorting ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}