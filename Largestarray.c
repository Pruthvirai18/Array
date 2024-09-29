#include<stdio.h>
int largest(int a[],int l)
{
    int max=a[0];
    for(int i=0;i<l;i++)
    {
        if(a[i]>max)
                max=a[i];
    }
    return max;
}
int main()
{
    int arr[]={30,67,89,100,92,20};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Largest element is array is %d",largest(arr,len));
    return 0;
}