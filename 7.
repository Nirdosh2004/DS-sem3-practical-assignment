/*7. Write a menu driven program to implement push, pop and display option of the
stack with the help of static memory*/

#include<iostream>

using namespace std;
#define size 5

int stack[size] , top = -1 , key;

inline void push(int key){
    if(top == size -1){
        cout<<"\nStack Overflow!\n";
    }
    else{
        cout<<"Enter element to push : ";
        cin>>key;
        top++;
        stack[top ]= key;
    }
}

inline void pop(){
    if(top == -1){
        cout<<"\nStack Underflow!\n";
    }
    else{
        cout<<"Popped element from stack : "<<stack[top]<<endl;
        top--;
    }
}

inline void display(){
    if( top == -1){
        cout <<"\nStack Underflow!\n";
    }
    else{
        cout<<"\nElements in stack : \n";
        for(int i= top ; i>=0;i--){
            cout<<stack[i]<<"   ";
        }
        cout<<endl;
    }
}

int main(){
    
    while(1){
        cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
        int choice;
        cout<<"Enter your operation : ";
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
                cout<<"Exited From Program  !!";
                exit(0);
            }
            default :
            {
                cout<<"Invalid choice !!";
            }
        }
    }
    
    
    return 0;
}
