#include<stdio.h>
void frequency(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        int count=1;
        while(i<n-1&&a[i]==a[i+1])
        {
            count++;
            i++;
        }
        printf(" \n%d: %d \n",a[i],count);

    }

}
int main()
{
    int arr[]={20,10,20,10,30,40,10,40,30,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    frequency(arr,len);
    return 0;
}