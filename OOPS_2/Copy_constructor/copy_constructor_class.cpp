class Student{
    int age;
   
public:
    char *name;
    Student(int age , char *name){
        this-> age = age ;
        
        // Shallow copy
      //   this-> name = name;
        
        //Deep copy
        this-> name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        
    }
    
    //ccopy constructor
    
    Student(Student const &s){
        this->age = s.age;
       // this->name = s.name;  // shallow copy
        
        // Deep copy
        this -> name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
    
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

