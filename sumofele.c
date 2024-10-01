#include<stdio.h>
int sum(int arr[],int n)
{

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int a[]={34,56,78,12,10,89};
    int len=sizeof(a)/sizeof(a[0]);
    printf("Sum is %d",sum(a,len));
    return 0;
}