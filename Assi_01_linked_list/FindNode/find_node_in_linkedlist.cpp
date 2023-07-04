#include<iostream>
using namespace std;
#include "class_find.cpp"


Node *takeInputBetter(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail -> next;
            
        }
        cin>>data;
    }
    return  head;
}

void print(Node * head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

 int findNode(Node *head, int x){
    int count = 0 ;
    Node *temp = head;
    
    while(temp != NULL){
        if(temp-> data == x){
            return count;
        }
        else{
            temp = temp -> next ;
            count ++;
        }
        
    }
     return -1;
    
}

int main(){
    Node * head = takeInputBetter();
    print(head);
    int x;
    cin>>x;
    
int ans =  findNode(head, x);
    cout<<ans<<endl;
}
