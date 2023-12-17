#include<iostream>
using namespace std;
int checksetbits(int a,int b)
{
    int counta=0;
    while(a!=0)
    {
        if(a&1)
        {
            counta++;
        }
        a=a>>1;
    }
    int countb=0;
     while(b!=0)
    {
        if(b&1)
        {
            countb++;
        }
        b=b>>1;
    }
    return counta+countb;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"total setbits is: "<<checksetbits(a,b)<<endl;
    return 0;
}