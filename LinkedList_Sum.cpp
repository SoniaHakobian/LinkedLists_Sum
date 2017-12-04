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
  int tmp = 0;
  int dec = 0; 
  if(l1.getlength()<=l2.getlength())
  {
    for(int i=0;i<l2.getlength();i++)
    {
      if (i>=l1.getlength())
      {
          tmp=l2.head->data + dec ;
      }
      else 
      tmp=l1.head->data+l2.head->data + dec ;
      if(tmp > 10)
      {
        tmp=tmp-10;
        l3.add(tmp);
        dec=0;
        dec++;
        if (i<l1.getlength()){
          l1.head=l1.head->next;
        }
        l2.head=l2.head->next;
        if(i == l2.getlength()-1 && dec > 0)
        {
         l3.add(dec);
        }
      }
      else
      {
      l3.add(tmp);
      dec = 0;
      if (i<l1.getlength()){
        l1.head=l1.head->next;
      }
        l2.head=l2.head->next;
      }
    }
  }
  return l3;
}
int main()
{
  List L1;
  L1.add(2);
  L1.add(5);
  L1.add(7);
  

  List L2;
  L2.add(2);
  L2.add(3);
  L2.add(9);
  L2.add(1);
  L2.add(5);

  sum(L1,L2).print();
  return 0;

}
