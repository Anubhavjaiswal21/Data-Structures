#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Sort01(int arr[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }
        while(arr[right]==1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
       
    }
}
int main(){
    int arr[8]={0,1,1,0,1,0,1,0};
    int n=8;
    Sort01(arr,n);
    printArray(arr,n);
    return 0;
}