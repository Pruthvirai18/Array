#include<stdio.h>
#include<limits.h>
int seclargest(int a[],int n)
{
    int i,max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    int sec_largest=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]!=max&&a[i]>sec_largest)
        sec_largest=a[i];
    }
    return sec_largest;
}
int main()
{
    int arr[]={34,27,89,23,56,26,7,8,2,18,88,78};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("%d is the second largest in the array",seclargest(arr,len));
    return 0;
}