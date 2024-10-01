#include<stdio.h>
#include<limits.h>
#define INT_MAX 2147483647
int secsmallest(int arr[],int n)
{
    int i,min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    int sec_smallest=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=min&&arr[i]<sec_smallest)
        sec_smallest=arr[i];
    }
    return sec_smallest;
}
int main()
{
    int a[]={34,27,89,23,56,26,7,8,2,18};
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d is the second smallest in the array",secsmallest(a,len));
    return 0;
}