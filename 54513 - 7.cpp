#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next ;
};

class Queue
{
    Node *front, *rear;

public:
    Queue() {
    
        front = NULL;
        rear = NULL;

    }
    void enqueue(int data)   {  
    
        Node *newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;

        if(front == NULL)
            front = rear = newnode;
        else {
        
            rear->next = newnode;
            rear = newnode;
        }
    }
    
    
    void dequeue() {           
    
        Node *temp;
        
        if(front == NULL)
            cout<<"Queue is Empty";
        else {
            temp= front;
            front = front->next;
            delete temp;
        }

    }
    
    
    void display() {
    
        Node *temp;
        temp= front;
        int counter = 0;
        
        
        while(temp != NULL) {
            cout<<temp->data<< endl;
            temp = temp->next;
            counter++;
        }
        cout <<"Size of List: " << counter <<endl;
        
    }
    
    void emptyQueue() {
    	
    	while(front != NULL) {
    		
    		dequeue();
		}
    	cout << "Queue Emptied" << endl;
    }
	
};

int main() {
	
	
    Queue list;
    
    list.enqueue(10);
	list.enqueue(20);
	list.enqueue(30);
	  
    cout<<"Queue after Enqueue :"<<endl;
    list.display();
    list.dequeue();
    list.display();
    list.emptyQueue();
    

    return 0;
}
