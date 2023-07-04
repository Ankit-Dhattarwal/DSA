#include<iostream>
using namespace std;
#include "getter_setter_class.cpp"

int main(){
    Students s1; // When create the object then always constructor call
    s1.display();
    
    Students s2;
    
    Students *s3 = new Students;
    s3->display();
    
    
    cout<<"Parameterized COnstructor "<<endl;
    Students s4(10);
    
    s4.display();
}
