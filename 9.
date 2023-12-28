//9. Write a menu driven program to implementing the various operations on a linear queue with the help of static memory allocation

#include<iostream>
using namespace std;
#define size 4 

int queue[size] , front = -1 , rear = -1 , key;

inline void push(int key){
    if(rear == size -1 ){
        cout<<"\nQueue overflow!\n";
    }
    else{
        if(front == -1){
            front++;
        }
        cout<<"\nEnter element to push : ";
        cin>>key;
        rear++;
        queue[rear] = key;
    }
}

inline void pop(){
    if(front == -1){
        cout<<"\nQueue underflow!\n";
    }
    else{
        cout<<"\nRemoved element from queue : "<<queue[front]<<endl;
        front++;
    }
}

inline void display(){
    if(rear == -1){
        cout<<"\nQueue is empty !\n";
    }
    else{
        cout<<"\nElements in queue : \n";
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<"|       |";
        }
        cout<<endl;
    }
}

int main(){
    while(1){
        cout<<"Menu\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
        int choice;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
            {
                push(key);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"\nExited from pragram!\n";
                exit(11);
            }
            default:
            {
                cout<<"\nInvalid input!!\n";
            }
        }
    }
    
    
    
    return 0;
}
