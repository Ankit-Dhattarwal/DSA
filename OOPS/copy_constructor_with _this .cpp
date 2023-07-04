#include<iostream>
using namespace std;
#include "getter_setter_class.cpp"
int main(){
    Students s1(10, 1001);
    cout<<"S1 : ";
    s1.display();
    
    Students s2(s1);
    cout<< "S2 : ";
    s2.display();
    
    Students *s3 = new Students(20, 2001);
    cout<<"S3 : ";
    s3 -> display();
    
    Students s4(*s3);
    
    Students *s5 = new Students(*s3);
    Students *s6 = new Students(s1);
}
