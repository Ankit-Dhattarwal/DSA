class ComplexNumber{
private:
    int real;
    int imaginary;
    
    //create the constructor
    
public:
    ComplexNumber(int real , int imaginary){
        this-> real = real;
        this -> imaginary = imaginary;
    }
    
    void print(){
        cout<<this->real << " " << "+" << " " << imaginary<< "i" <<endl;
    }
    
    void plus(ComplexNumber const &c2){
        int num  = real + c2.real;
      int num2 = imaginary + c2.imaginary;
        
        real = num;
        imaginary = num2;
        
    }
    
    void multiply(ComplexNumber const &c2){
        int nums1  = (real * c2.real) + ( -1 * (imaginary * c2.imaginary)) ;
        int nums2 = (real * c2.imaginary) + (imaginary * c2.real);
        
        real = nums1;
        imaginary = nums2;
    }
};
