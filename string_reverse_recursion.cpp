#include<iostream>
using namespace std;
void reverse(string& str,int i,int j)
{
    if(i>j)
    {
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main(){
    string name;
    cin>>name;
    int size=name.length();
    reverse(name,0,size-1);
    cout<<name<<endl;
    return 0;
}
