#include<bits/stdc++.h>
using namespace std;
void printF(vector<int> ds)
{
	for(int i=0;i<ds.size();i++)
	{
		cout<<ds[i]<<" ";
	}
	cout<<endl;
}
void subsequence(int index,vector<int> &ds,int arr[],int n)
{
	if(index==n)
	{
		if(ds.size()==0)
		cout<<"{ }"<<" ";
		printF(ds);
	
		return;
	}
	
	ds.push_back(arr[index]);
	subsequence(index+1,ds,arr,n);
	ds.pop_back();
	subsequence(index+1,ds,arr,n);
}
int main()
{
	int arr[3]={3,1,2};
	int n=3;
	vector<int> ds;
	subsequence(0,ds,arr,n);
}
