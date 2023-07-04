#include<iostream>
using namespace std;
#include "Shallow_Deep_Class.cpp"

int main(){
    char name[] = "abcd";
    
    Student s1(20, name);
    s1.display();
    
    name[3] = 'e';
    Student s2(25, name);
    s2.display();
    
    s1.display();
}
