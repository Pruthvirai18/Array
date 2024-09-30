#include<stdio.h>
int largest(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int smallest(int a[],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
int main()
{
    int arr[]={34,56,3,100,92,10,26,72,34};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Largest element is array is %d",largest(arr,len));
    printf("\nSmallest element in the arrayis %d",smallest(arr,len));
    return 0;
}