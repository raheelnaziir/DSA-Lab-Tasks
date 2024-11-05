#include<iostream>
using namespace std;

class Node {
private:
    int id;
    string semester, name;
    Node* next;
    Node* previous;

public:
    Node(int id, string semester, string name) {
        this->id = id;
        this->semester = semester;
        this->name = name;
        this->next = NULL;
        this->previous = NULL;
    }

    void setID(int id, string semester, string name) {
        this->id = id;
    }
    void setNext(Node* next) {
        this->next = next;
    }
    void setPrevious(Node* previous) {
        this->previous = previous;
    }

    int getid() {
        return id;
    }
    string getSem() {
        return semester;
    }
    string getName() {
        return name;
    }
    Node* getNext() {
        return next;
    }
    Node* getPrevious() {
        return previous;
    }
};

class linkedList {
private:
    Node* head = NULL;

public:
    linkedList() {
        head = NULL;
    }

    void at_head(int id, string semester, string name) {
        Node* n = new Node(id, semester, name);
        n->setNext(head);
        if (head != NULL) {
            head->setPrevious(n);
        }
        head = n;
    }

    void middle(int id, string semester, string name, int place) {
    	
        Node* n = new Node(id, semester, name);
        if (head == NULL) {
            cout << "No list found " << endl;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < place - 1 && temp != NULL; i++) {
            temp = temp->getNext();
        }
        if (temp == NULL || temp->getNext() == NULL) {
            cout << "Position out of bounds" << endl;
            return;
        }
        n->setNext(temp->getNext());
        n->setPrevious(temp);
        temp->getNext()->setPrevious(n);
        temp->setNext(n);
    }

    void at_tail(int id, string semester, string name) {
        Node* n = new Node(id, semester, name);
        if (head == NULL) {
            at_head(id, semester, name);
            return;
        }
        Node* temp = head;
        while (temp->getNext() != NULL) {
            temp = temp->getNext();
        }
        temp->setNext(n);
        n->setPrevious(temp);
    }

    void remove_num(int target) {
        if (head == NULL) {
            cout << "No list found" << endl;
            return;
        }

        Node* temp = head;
        while (temp != NULL && temp->getid() != target) {
            temp = temp->getNext();
        }

        if (temp == NULL) {
            cout << "not found" << endl;
            return;
        }

        if (temp == head) {
            head = temp->getNext();
            if (head != NULL) {
                head->setPrevious(NULL);
            }
            delete temp;
            return;
        }

        if (temp->getNext() != NULL) {
            temp->getNext()->setPrevious(temp->getPrevious());
        }
        if (temp->getPrevious() != NULL) {
            temp->getPrevious()->setNext(temp->getNext());
        }
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->getid() << "->" << temp->getSem() << "->" << temp->getName() << endl;
            temp = temp->getNext();
        }
    }
};

int main() {
    linkedList list;

    cout << "Inserting at Tail" << endl;
    list.at_tail(543, "3rd", "Saif");
    list.at_tail(545, "3rd", "Ali");
    list.display();

    cout << endl;

    cout << "Inserting at Head" << endl;
    list.at_head(223, "5th", "Shahroz");
    list.display();

    cout << endl;

    cout << "Inserting at Middle" << endl;
    list.middle(637, "6th", "Basit", 2);  
    list.display();

    cout << endl;
    cout << "Deleting:" << endl;
    list.remove_num(545);  
    list.display();

    return 0;
}
