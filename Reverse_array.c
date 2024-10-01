#include<stdio.h>
int Reverse(int a[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);
}
int main()
{
    int arr[]={45,67,8,7,923,456,22,67};
    int len=sizeof(arr)/sizeof(arr[0]);
    Reverse(arr,len);
    return 0;
}