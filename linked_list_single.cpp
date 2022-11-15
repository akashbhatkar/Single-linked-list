#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};
node *head=new node();
void print(node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    delete temp;
}
void reverseprint(node *temp)
{
    if(temp==NULL)
        return;
    reverseprint(temp->next);
    cout<<temp->data<<"\t";

}
void addlast(node* &head,int new_data)
{
    node *last=new node();
    node *temp=new node();
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=last;
    last->data=new_data;
    last->next=NULL;

}
void addafter(node* &head,int data)
{
    node *newmiddle =new node();
    node *temp=new node();
    temp=head;
    while(temp->data!= data)
    {
        temp=temp->next;
    }
    temp->next=newmiddle;
    newmiddle->data=35;
    newmiddle->next=NULL;

}

void insertnewhead(node * &head,int data)
{
    node *newhead=new node () ;
    newhead->data=data;
    newhead->next=head;
    head=newhead;
   }

void deleteatfirst(node* &head)
{
    node *todelete=new node();
    todelete=head;
    head=head->next;
    delete todelete;
}

void deleteatpos(node* &head,int data)
{
   node *temp=new node();
   node *deletenode=new node();
   temp=head;
   while(temp->next->data!=data)
   {
       temp=temp->next;
   }
   deletenode=temp->next;
   temp->next=temp->next->next;
   delete deletenode;
}
int main()
{

    node *second=new node();
    node *third=new node();

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;
    cout<<"printing in forward order"<<endl;
    print(head);


    cout<<"\nprinting in the reverse order"<<endl;
    reverseprint(head);

    cout<<"\nadding the node at start "<<endl;
    insertnewhead(head,5);
    print(head);


    cout<<"\nadding at the last position"<<endl;
    addlast(head,40);
    print(head);


    cout<<"\ndelete at begining"<<endl;
    deleteatfirst(head);
    print(head);

    cout<<"\ndelete the member"<<endl;
          deleteatpos(head,40);
    print(head);



}
