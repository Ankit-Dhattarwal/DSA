#include<iostream>
using namespace std;
#include "getter_setter_class.cpp"
int main(){
    Students s1(10, 1001);
    Students s2(20, 2001);
    Students *s3 = new Students(30, 3001);
    
    s2 = s1;
    *s3 = s1;
    s2 = *s3;
    
}
