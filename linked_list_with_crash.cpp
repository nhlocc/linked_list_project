#include <iostream>
#include "linked_list.cpp"

void badFunction() {
    LinkedList list;
    list.insert(10);
    Node* temp = nullptr; // Simulate bad access
    std::cout << temp->data << std::endl; // This will crash
}

int main() {
    badFunction();
    return 0;
}
