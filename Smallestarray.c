#include<stdio.h>
int smallest(int a[],int n)
{
    int i;
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
int main()
{
    int arr[]={34,18,89,23,90};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("%d is the smallest in the array",smallest(arr,len));
    return 0;
}