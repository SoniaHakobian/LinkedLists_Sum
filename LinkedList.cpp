#include <iostream>

class List{
 public:
 struct Node{
    int data;
    Node* next;
  };
  List();
  Node* head;
  int length;
  int getlength();
  void print();
  void add(int n);
  friend List sum(List l1, List l2);
};

List::List()
{
  this->length=0;
  this->head=nullptr;
}
int List::getlength()
{
  return length;
}

void List::add(int n)
{
  Node* node=new Node;
  node->data=n;
  node->next=head;
  head=node;
  length++;
}
void List::print()
{
while(head!=nullptr)
{
  std::cout<<head->data<<"--->";
  head=head->next;
}
}
List sum(List l1, List l2)
{
  List l3;
  int tmp;
  int dec=0;
  if(l1.getlength()<=l2.getlength())
  {
    for(int i=0;i<=l2.getlength();i++)
    {
      tmp=l1.head->data+l2.head->data;
      if(tmp > 10)
      {
        tmp=tmp-10;
        l3.add(tmp);
        l3.add(++dec);
        dec=0;
        l1.head=l1.head->next;
        l2.head=l2.head->next;
      }
      else
      {
      l3.add(tmp);
      }

    }
  }
  return l3;
}

int main()
{
  List L1;
  L1.add(2);
  L1.add(2);
  L1.add(2);

  List L2;
  L2.add(3);
  L2.add(3);
  L2.add(3);

  sum(L1,L2).print();


  return 0;
}
