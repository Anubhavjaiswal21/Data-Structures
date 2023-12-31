#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(25);
    cout << "size of queue is " << q.size() << endl;

    cout << "front element " << q.front()<<endl;

    q.pop();
    cout << "size of queue is " << q.size() << endl;
    cout << "front element " << q.front();

    return 0;
}