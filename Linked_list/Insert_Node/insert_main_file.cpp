#include<iostream>
using namespace std;
#include "insert_class.cpp"

// Take input of the node

Node *takeInput_Better(){
    int data;
    cin>>data;
    Node * head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail-> next;
            //OR
            // tail = newNodde;
        }
        cin>>data;
    }
    return head;
}


/*
Node *takeInput(){
    int data;
    cin>>data;
    
    Node * head = NULL;
    
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node * temp = head;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        cin>>data;
    }
    return head;
}

*/

//void print(Node *head, int i){
//    Node *temp = head;
//    int count = 0;
//    while(temp != NULL && count != i){
////        cout << temp -> data<<" ";
//        temp = temp -> next;
//        count++;
//
//    }
//
//    if(count == i && temp != NULL){
//        int data = temp -> data;
//        cout<<data<<endl;
//
//    }
//    cout<<endl;
//    cout<<"The length is: "<<count<<endl;
//}

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
        
    }
}

Node* InsertNode(Node *head, int i, int data){
    Node * newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    
    if( i == 0){
        newNode -> next = head;
        head  = newNode;
        return head;
    }
    
    while (temp != NULL && count < i-1){
        temp = temp -> next;
        count++;
    }
    
    if(temp != NULL){
        Node *a = temp->next;
        temp -> next = newNode;
        newNode -> next = a;
    }
    return head;
}

int main(){
    Node *head = takeInput_Better();
//    int i;
//    cout<<"Enter the value of i"<<endl;
//    cin>>i;
//    print(head,i);
    print(head);
    int i , data;
    cin>>i>>data;
    
    head = InsertNode(head, i, data);
    print(head);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    //Statically
    
    Node n1(1);
    Node *head = &n1;  // This is create because we want to save the address of first node
    
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    
    print(head);
    print(head);
    
    */
    
}

