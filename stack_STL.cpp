#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    //for stack empty or not
    if(s.empty())
    {
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }
    if(s.size())
    {
        cout<<"Stack size is "<<s.size();
    }
    return 0;
}
