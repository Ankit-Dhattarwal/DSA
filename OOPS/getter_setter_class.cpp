class Students{
public:
    int rollNumber;
    
private:
    
    int age;
    
public:
    
    //Destructor created
    ~Students(){
        cout<<"Destrutor is called!"<<endl;
    }
    
  // Default Constructor
    Students(){
    cout<< "Constructor called! "<<endl;
    }
    
  // parameterized COnstructor
    
    Students(int rollNumber){
        cout<<"Constructor 2 called! "<<endl;
       this -> rollNumber = rollNumber;
    }
    
    Students(int a, int r){
        cout<< "this :" << this <<endl;
        cout<<"Constructor 3 called! "<<endl;
        age = a;
        rollNumber = r;
    }
    
void display(){
    cout << age << " " << rollNumber<<endl;
    }
    
int getAge(){
    return age;
    }
  void setAge(int a){
    age = a;
    }
};

