#include<stdio.h>
void frequency(int a[],int n)
{
   int i,j;
   int visited[n];
   int count;
   for(i = 0; i < n; i++) {
      visited[i] = 0;
   }
   for(i=0;i<n;i++)
   {
      if(visited[i]==0)
      {
         count=1;
         for(int j=i+1;j<n;j++)
         {
            if(a[i]==a[j])
            {
            count++;
            visited[j]=1;
            }
         }
         printf(" %d: %d \n",a[i],count);
      }
}
}
int main()
{
   int arr[]={20,10,20,10,30,40,10};
   int len=sizeof(arr)/sizeof(arr[0]);
   frequency(arr,len);
   return 0;
}