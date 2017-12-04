#include<iostream>

struct student {
int age;
std::string name;
};

void setStudentData(student& st, int age, std::string name)

{
st.age=age;
st.name=name;

  }

void printStudentData(student& st)
{
    std::cout<<"The name is "<<st.name<<std::endl;
    std::cout<<"The Age is "<<st.age<<std::endl;
    
    }

void copyFrom(student& s1, student& s2)
{
   s1.age=s2.age;
   s1.name=s2.name;
   std::cout<<"The name of 1st person is "<<s1.name<<" and the age is "<<s1.age<<std::endl;
    
    }

int main()
{   
 student person1;
 student person2;
  setStudentData(person1, 19, "Sonia");
  setStudentData(person2, 30, "Jake");
    std::cout<<"Write the name: ";
    std::cin>>ob.name;
    std::cout<<"Write the age: ";
    std::cin>>ob.age;
    
    
    printStudentData(person1);
    printStudentData(person2);
    copyFrom(person1,person2);
    return 0;
}
