#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return -1;
}
int main(){
    int arr[8]={2,3,4,7,9,10,23,35};
    int key=0;
    cin>>key;
    int index=0;
    index=Binarysearch(arr,8,key);
    cout<<key<<" is at "<<index;    
    return 0;
}