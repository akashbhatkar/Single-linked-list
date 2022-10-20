/**WAP TO DEMONSTRATE SINGLE LINKED LIST**/
#include <iostream>

using namespace std;
class node
{
public:
  int data;
  node *next;

};
void
print (node * head)
{
  for (head; head != NULL; head = head->next)
    {
      cout << head->data << "  ";
    }
}
void deletenode(node *n,int i)
{
    node *temp=new node();
    temp=n;
    node *prev=new node();
    
    while(temp!=NULL&&temp->data!=i)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;
}

void reverseprint(node *n)
{
   if(n==NULL)
   return ;
   reverseprint(n->next);
   cout<<n->data<<" ";
}

void deletelast(node *n)
{
    node *temp=new node();
    node *prev=new node();
    while(temp->next!=NULL)
    {
       prev=temp; 
       temp=temp->next;
    }
    prev->next=NULL;
    
}
int main ()
{
    node *head = new node ();
    node *second = new node ();
    node *third = new node ();
    
    head->data = 54;
    head->next = second;
    
    second->data = 45;
    second->next = third;
    
    third->data = 32;
    third->next = NULL;
    
    //printing in the first to last
    cout<<"printing the list as it is "<<endl;
      print(head);
      cout<<endl;
    //inserting element at the first
    node *firsthead = new node ();
    firsthead->data = 15;
    firsthead->next = head;
    cout<<"printing the list after inserting element at the start"<<endl;
    print(firsthead);
    cout<<endl;
    node *last = new node ();
    third->next = last;
    
    last->data = 100;
    last->next = NULL;
    
    cout<<"printing the list at afer inserting element at the last"<<endl;
    print(firsthead);
    cout<<endl;
    
    node *insert = new node ();
    second->next = insert;
    
    insert->data = 22;
    insert->next = third;
     cout<<"printing the list after inserting element into the middle"<<endl;
    print (firsthead);
    cout<<endl;
    cout<<"printing the list in reverse"<<endl;
    reverseprint(firsthead);
    
    cout<<"\ndeleting at the specific position"<<endl;
    deletenode(firsthead,22);
    cout<<endl;
     print (firsthead);
     
     
     cout<<"\ndeleting at the begining"<<endl;
     firsthead->data=head->data;
     firsthead->next=head->next;
         cout<<endl;
      print (firsthead);
      
      cout<<"delete at the end"<<endl;
      deletelast(firsthead);
       cout<<endl;
      print (firsthead);
      
}


