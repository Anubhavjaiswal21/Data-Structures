#include <iostream>
using namespace std;
class Stack{
  public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top != size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack undeflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty " << endl;
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return true;
        }
        else
        {
            cout << "stack is not empty" << endl;
            return false;
        }
    }
};
int main()
{

    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(11);
    st.push(25);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    return 0;
}
