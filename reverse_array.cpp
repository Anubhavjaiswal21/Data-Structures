#include<iostream>
using namespace std;
void reversearray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n)
{
    cout<<"Reversed Array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"ENTER THE ELEMENTS OF ARRAY: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversearray(arr,n);
    printArray(arr,n);
    
}