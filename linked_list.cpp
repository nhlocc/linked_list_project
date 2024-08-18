#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    void deleteValue(int value) {
        Node* temp = head;
        Node* prev = nullptr;
        while (temp && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }
        if (!temp) return; // Value not found
        
        if (prev) {
            prev->next = temp->next;
        } else {
            head = temp->next;
        }
        delete temp;
    }
    
    void print() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};
