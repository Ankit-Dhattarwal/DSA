class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;
    
public:
    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    
    // copy constructor
    
    DynamicArray(DynamicArray const &d){
        // this -> data = d.data;    // shallow copy so ingnore here
        
        //Deep copy
        
        this-> data = new  int (d.capacity);
        for(int i = 0; i<d.nextIndex; i++){
            this-> data[i] = d.data[i];
        }
        this->capacity = d.capacity;
        this->nextIndex = d.nextIndex;
    }
    
    // create a copy assignment operator
    
    void operator=(DynamicArray const &d){
        
        this-> data = new  int (d.capacity);
        for(int i = 0; i<d.nextIndex; i++){
            this-> data[i] = d.data[i];
        }
        this->capacity = d.capacity;
        this->nextIndex = d.nextIndex;
    }
    
    void add(int element){
        if(nextIndex == capacity){
            int *newData = new int[capacity * 2];
            for(int i = 0; i<capacity;i++){
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity *= 2;
            
        }
            data[nextIndex] = element;
        nextIndex++;
    }
    
    int get(int i){
        if(i< nextIndex){
            return data[i];
        }
        else{
            return -1;
        }
    }
    
    void add(int i , int element){
        if( i < nextIndex){
            data[i] = element;
        }
        else if(i == nextIndex){
            add(element);
        }
        else{
            return;
        }
    }
    
    void print() const{
        for(int i = 0; i<nextIndex; i++){
            cout<< data[i]<<" ";
        }
        cout<<endl;
    }
};
