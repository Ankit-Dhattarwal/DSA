#include<iostream>
using namespace std;
#include "class_LL.cpp"

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

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
        
    }
}

int length(Node *head){
    if(head == NULL){
        return 0;
    }
    else{
        return 1 + length(head -> next);
    }
}

int main(){
    Node *head = takeInput_Better();
    print(head);
    cout<<endl;
    
    cout<<"The length of the linked list is the: "<<length(head)<<endl;
    
}
