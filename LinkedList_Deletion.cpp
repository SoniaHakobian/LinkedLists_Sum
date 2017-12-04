//Deletion at a particular position
#include<iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
class list{
      
  private:
  node *head, *tail;
  public:
  list()
  {
   head=NULL;
   tail=NULL;
  }
  void createnode(int value)
  {
    node *temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
      tail=temp;
      temp=NULL;
    }
    else
    {
    tail->next=temp;
    tail=temp;
  }
  }
  void display()
  {
    node* temp=new node;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"--->";
      temp=temp->next;
    }
  }
  void deletepos(int pos)
  {
    node* current=new node;
    node* previous=new node;
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
  }
};
int main()
{
list obj;
 obj.createnode(1);
 obj.createnode(2);
 obj.createnode(3);
 obj.createnode(4);
 obj.createnode(5);
 obj.createnode(6);
 obj.createnode(7);
 obj.createnode(8);
 obj.createnode(9);
 obj.deletepos(5);
 obj.display();
 cout<<"NULL";
  return 0;
}
