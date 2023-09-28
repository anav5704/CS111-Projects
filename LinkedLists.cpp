#include<iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* nextElement; // Pointer to the next Node 
};

void printLinkedList(Node* headElement){
    while(headElement != NULL){
        cout << headElement->value << endl;
        headElement = headElement->nextElement;
    }

}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->nextElement = second;

    second->value = 2;
    second->nextElement = third;

    third->value = 3;
    third->nextElement = NULL;

    printLinkedList(head);
    
    return 0;
}