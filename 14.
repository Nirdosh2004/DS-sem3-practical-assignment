//14. Write a program to input how many numbers and then input the numbers and then search any number with the help of sequential/linear search

#include<iostream>
using namespace std;

int linearSearch(int array[] , int sizeOfArray , int target){
    for(int i=0;i<sizeOfArray;i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int sizeOfArray;
    cout<<"Enter size of array : ";
    cin>>sizeOfArray;
    int array[sizeOfArray];
    cout<<"Enter elements of array : \n";
    for(int i=0;i<sizeOfArray;i++){
        cin>>array[i];
    }
    int target;
    cout<<"Enter target to search : ";
    cin>>target;
    cout<<"element at index : " <<linearSearch(array , sizeOfArray , target);
    
    
    return 0;
}
