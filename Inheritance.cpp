#include <iostream>
using namespace std;
class A 
{
      protected: 
      int width;
      int height;
   public: 
      void set(int a,int b)
   {
       width=a;
       height=b;
   }
};
class B: public  A
{
public: 
    int square ()
  {
    return (height*width);
  }
};
int main()
{ B ob;
 int a,b;
   cout<<"Input width: "<<endl;
   cin>>a;
   cout<<"Input the height: "<<endl;
   cin>>b;

   ob.set(a,b);
   cout<<"Total area: "<<ob.square()<<endl;
          
   return 0;
}
