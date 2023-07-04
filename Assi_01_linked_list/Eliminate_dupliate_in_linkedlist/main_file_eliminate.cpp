#include<iostream>
using namespace std;
#include "eliminate_class.cpp"

Node *takeInputBetter(){
    int data;
    cin>>data;
    
    Node *head = NULL;
    Node *tail = NULL;
    
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail ->next;
        }
        cin>>data;
    }
    return head;
}
void print(Node * head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

void eliminateNode(Node * head)
{
    Node * t1 = head;
    Node *t2 = head -> next;
    
    while(t2 != NULL){
        if(t1 -> data != t2 -> data){
            t1 -> next = t2;
            t1 = t2;
            t2 = t2 -> next;
        }
        else{
            Node *t = t2;
            t2 = t2 -> next;
            delete t;
        }
    }
    t1 -> next = t2;
}

int main(){
    Node * head =  takeInputBetter();
    
    eliminateNode(head);
    print(head);
}
