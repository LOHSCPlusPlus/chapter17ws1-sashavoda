#include <iostream>
using namespace std;
//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

// Part 1.1 Complete the node declaration
struct Node{
Node(int num);
  int data;
  Node *next;
};

// Part 1.2 Define the Node constructor
Node::Node(int num){
  data = num;
  next = nullptr;
};
//constants
const int SENTINEL = -999;


//print function
void printList(Node *head);

//main
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    Node *nodePtr = nullptr;
    int num = 0;
  
    cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
    cin >> num;
    while (num != SENTINEL) {
        // Part 2, create a new node pointer, and append it to the list.
    if(head == nullptr){
      tail == nodePtr;
      
}
else {
  nodePtr -> next = head;
}
head = nodePtr;
      

    
        cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
        cin >> num;
    }

	printList(head);
if (head != nullptr) {
	Node *next = head->next;
	delete head;
	head = next;
}
if (head == nullptr) {
tail = nullptr;
}
printList(head);
  
    // Part 3, delete the list
  while(head != nullptr){
    Node *next = head -> next;
    delete head;
    head = next;
  }
  tail = nullptr;
  
    return 0;
}

// Part 4 fill in the print function to print the list
void printList(Node *head) {
  Node *curr = head;
  while(curr != nullptr){
    cout << curr-> data;
    curr = curr-> next;
  }
}
