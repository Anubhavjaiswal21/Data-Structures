#include<iostream>
using namespace std;
void print(int*arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int count=0;
bool linearsearch(int *arr,int size,int key)
{
    count++;
    cout<<count;
    print(arr,size);
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else{
        bool remainingpart=linearsearch(arr+1,size-1,key);
        return remainingpart;
    }
}
int main(){
    int arr[7]={45, 56, 79, 81, 82, 94, 108};
    int size=7;
    int key=9;
    cout<<linearsearch(arr,size,key);
    return 0;
}