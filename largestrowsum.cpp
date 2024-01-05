#include<iostream>
using namespace std;
int largestrowsum(int arr[][3],int row ,int col)
{
    int rowindex=0;
    int maxi=-1;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        maxi=max(maxi,sum);
        rowindex=row;
    }
    return maxi;
}
int main(){
    int arr[3][3]={3,4,7,6,7,2,1,3,7};
    int maximumsum=largestrowsum(arr,3,3);
    cout<<"Largest Row Sum: "<<maximumsum;
    return 0;
}