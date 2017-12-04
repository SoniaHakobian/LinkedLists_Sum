#include <iostream>
using namespace std;
template <typename T>
class A{
  public:
  T a,b;
  A(T first, T second): a(first), b(second) {}
  T bigger();
};
template <typename T>
T A<T>::bigger(){
  return a>b?a:b;
  
}
int main()
{
  A <int> ob(78,60);
  cout<<ob.bigger()<<endl;
  
  return 0;
}
