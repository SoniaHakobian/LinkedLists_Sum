#include<iostream>
using namespace std;
#define max 100
class stack{
  public:
  int top;
  int a[max];
  
  stack():top(-1){}
  int push(int x);
  int pop();
  bool isEmpty();
};

int stack::push(int x)
{ 
  if(top>=max)
  {
    cout<<"error,stack overflow"<<endl;
    return 0;
  }
  a[++top]=x;
  return x;
}

int stack::pop()
{
  if(top<0)
  {
    cout<<"error,stack underfelow"<<endl;
    return 0;
  }
 int x= a[top--];
  return x;
}

bool stack::isEmpty()
{
return (top<0);
}
int main()
{
  stack s;
 cout<<s.push(10)<<endl;
 cout<<s.push(29)<<endl;
 cout<<s.push(39)<<endl;
 cout<<"poped item: "<<s.pop()<<endl;
  
  
  return 0;
}
