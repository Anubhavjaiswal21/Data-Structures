#include<iostream>
using namespace std;

int lowerbinarysearch(int arr[],int target,int n)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
   int n=9;
   int arr[10]={1,2,3,3,5,8,8,10,10,11};
   int target=0;
   cin>>target;
   int ans=lowerbinarysearch(arr,target,10);
   cout<<"The lowerbound is "<<ans;
   return 0;
   }