#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    /* ~Node()
     {
         int val = this->data;
         if (next != NULL)
         {
             delete next;
             next = NULL;
         }
         cout << " Memory free for node with data " << val << endl;
     }*/
};
// Traverse function
void printList(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
}
// Length function
int getlegth(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertathead(Node *&head, int data)
{
    // if condition for empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        // tail=temp;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertattail(Node *&tail, int data)
{
    // if condition for empty list
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        // head=newnode;
        tail = newnode;
    }
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertatposition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}
void deletion(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    Node *curr = head;
    Node *previous = NULL;
    int count = 1;
    while (count < position)
    {
        count++;
        previous = curr;
        curr = curr->next;
        count++;
    }
    previous->next = curr->next;
    curr->prev = NULL;
    curr->next->prev = previous;
    curr->next = NULL;

    delete curr;
}
int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = head;
    printList(head, tail);
    cout << "Length of LinkedList is " << getlegth(head) << endl;
    /*insertathead(head,4);
    insertathead(head,14);
    insertathead(head,24);
    printList(head);*/

    insertattail(tail, 4);
    insertattail(tail, 14);
    insertattail(tail, 24);
    printList(head, tail);

    insertatposition(head, tail, 34, 4);
    printList(head, tail);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    //original linkedlist
    cout<<"Linkedlist: "<<endl;
      printList(head, tail);

    // beg delete
    cout << "beg delete" << endl;
    deletion(head, 1);
    printList(head, tail);

    cout << "last delete" << endl;
    deletion(head, 4);
    printList(head, tail);
    cout << "middle delete" << endl;
    deletion(head, 2);
    printList(head, tail);
    return 0;
}