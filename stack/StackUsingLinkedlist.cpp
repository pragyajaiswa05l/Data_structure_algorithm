#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class StackUsingLinkedlist{
    Node *head;
    int size;

public:
    StackUsingLinkedlist(){
        head = NULL;
        size = 0;
    }

    int getsize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    void push(int element){
        Node *newnode = new Node(element);


        newnode->next = head;
        head = newnode;
        size++;
    }

    int top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }

    int pop(){
        if(isEmpty()){
            return 0;
        }
        int t = head->data;
        Node * temp = head;
        head = head->next;
        delete temp;
        size--;
        return t;


    }
};


int main(){
    StackUsingLinkedlist s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getsize()<<endl;
    cout<<s.isEmpty()<<endl;
}
