#include "linked_list.cpp"

void testLinkedList() {
    LinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.print(); // Expected: 1 2 3

    list.deleteValue(2);
    list.print(); // Expected: 1 3

    list.deleteValue(1);
    list.print(); // Expected: 3

    list.deleteValue(3);
    list.print(); // Expected: (empty)
}

int main() {
    testLinkedList();
    return 0;
}
