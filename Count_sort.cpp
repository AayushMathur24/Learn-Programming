#include <iostream>
using namespace std;

void func(int arr[],int n)
{
    int k = n+1;
    int A[k];
    for(int i=0;i<k;i++)
    {
        A[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        A[arr[i]]++;
    }
   int ind=0;
   for(int i=0;i<k;i++)
   {
       int j=A[i];
       while(j>0)
       {
           arr[ind] = i;
           j--;
           ind++;
       }
   }
   for(int i=0;i<n;i++)
       cout<<arr[i]<<' ';
}

int main()
{
    int num;
    cout<<"Enter number of elements : ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements : ";
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"Array after sorting : ";
    func(arr,num);
    return 0;
}
