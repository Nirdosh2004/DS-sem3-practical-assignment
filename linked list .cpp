#include<iostream>
using namespace std;

class node{
    public:
    string data;
    node* next;
    node(string d){
        this -> data = d;
        this -> next = NULL;
    }
};

inline void insertAtHead(node* &head , string data){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}

inline void insertAtTail(node* &tail , string data){
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp;
}

inline void insertAtDesiredPosition(node* &head , node* &tail , int position , string data){
    if(position == 1){
        insertAtHead(head , data);
        return ;
    }
    int count = 1;
    node* temp = head;
    while(count < position-1){
        count++;
        temp = temp -> next;
    }
    if(temp -> next == NULL){
        insertAtTail(tail , data);
        return ;
    }
    node* temp2 = new node(data);
    temp2 -> next = temp -> next;
    temp -> next = temp2;
}

inline void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<"|      ";
        temp = temp -> next;
    }
}

int main(){
    node* object = new node("Object");
    node* head = object;
    node* tail = object;
    
    insertAtHead(head , "At head");
    print(head);
    cout<<endl;
    insertAtTail(tail , "At tail");
    print(head);
    cout<<endl;
    insertAtDesiredPosition(head , tail , 3 , "At position ");
    print(head);
    
    
    return 0;
}
