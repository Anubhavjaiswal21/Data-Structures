#include<iostream>
using namespace std;
void print(int arr[],int s,int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool binarysearch(int *arr,int s,int e,int k)
{
    print(arr,s,e);
    if(s>e)
    {
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]>k)
    {
        return binarysearch(arr,s,mid-1,k);
    }
    else{
        return binarysearch(arr,mid+1,e,k);
    }
}
int main(){
    int arr[6]={2,4,6,8,9,10};
    int size=6;
    int key=16;
    cout<<binarysearch(arr,0,5,key);
    
    return 0;
}