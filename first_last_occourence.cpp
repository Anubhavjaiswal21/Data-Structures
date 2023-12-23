#include<iostream>
using namespace std;
int lastoccurence(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<end)
    {
      
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
       else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=(start+end)/2;
       
    }
     return ans;

}
int firstoccurence(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
     int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
       else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
     return ans;

}
int main(){
    int arr[8]={2,3,4,4,5,6,7,8};
    cout<<firstoccurence(arr,8,4)<<endl;
    cout<<lastoccurence(arr,8,4)<<endl;

}