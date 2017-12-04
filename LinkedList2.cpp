#include <iostream>
using namespace std;
class node
{
  public:
  int data;
  node *next;
};
node *top=NULL;


class list
{
  public:
  void push(int x)
  {
  node *temp=new node;
  temp->data=x;
  temp->next=top;
  top=temp;
}

void pop()
{
  node* temp;
  if(top==NULL)
  {
    cout<<"Stack is empty"<<endl;
    return;
  }
  else
  {
   temp=top;
   top=top->next;
   delete temp;
  }
}


void display()
 {
   if(top==NULL)
   {
        cout<<"List is empty!"<<endl;
        return;
    }
    node* temp=new node;
    temp=top;
    while(temp!=NULL)
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
 }
};
int main()
{
  list obj;
   obj.push(2);
   obj.push(6);
   obj.push(8);
   obj.display();
   cout<<endl;
   obj.pop();
   obj.display();
  return 0;
}
