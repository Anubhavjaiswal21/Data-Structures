#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    //CONSTRUCTOR
    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};
void insertatHead(Node* &head,int data)
{
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;

}
void insertattail(Node* & tail,int data)
{
    Node *temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
void print(Node * &head)
{
    Node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    //insertatHead(head,12);
    insertattail(tail,12);
    print(head);
    insertatHead(head,15);
    print(head);
    insertattail(head,9);
    print(head);
    return 0;
}