#include<iostream>
#include<stack>
#include<climits>
using namespace std;

class StackUsingArray{

    int *data;
    int capacity;
    int nextindex;


  public:
    StackUsingArray(int n){
        data = new int[n];
        capacity = n;
        nextindex = 0;
    }

    bool isEmpty(){
        return nextindex == 0;
    }

    int size(){
        return nextindex;
    }

    void push(int element){
        if(nextindex == capacity){
            int *newdata = new int[2*capacity];
            for(int i = 0; i<nextindex ; i++){
                newdata[i] = data[i];
            }
            delete []data;
            data = newdata;
            capacity = 2*capacity;

        }
        data[nextindex] = element;
        nextindex++;
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        else{
            return data[nextindex-1];
        }
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;;
            return INT_MIN;
        }
        else{
            nextindex--;
            return data[nextindex];
        }
    }


};

int main(){
    StackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
}

