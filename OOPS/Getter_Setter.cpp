#include<iostream>
using namespace std;
#include "getter_setter_class.cpp"
int main(){
    Students s1;
    Students s2;
    Students *s3 = new Students;
    s1. rollNumber =101;
    
    cout<< "S1 Age: "<<s1.getAge()<<endl;
    cout<< "S1 RollNumber: " << s1.rollNumber<<endl;
    
   // s1.display();
  //  s2.display();
    
    
    Students * s6 = new Students;
    (*s6).rollNumber = 199;
    
   // (*s6).display();
    
    cout<< "S6 age: " << s6->getAge()<<endl;
    
    s1.setAge(20);
    s3 ->setAge(25);
    
    s1.display();
    s3->display();
}
