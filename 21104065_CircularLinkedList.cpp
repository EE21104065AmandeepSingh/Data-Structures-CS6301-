//Name : Amandeep Singh
//SID: 21104065
//Branch :  Electrical Engineeing


// Q1. While traversing a single-circular linked list, which condition establishes 
// that the traversing element/variable has reached the first element?

// A1 Explanation :- when we create a new linked list we set first element as head and when we 
// continue to add elements to linked list. 
// The address of the 1st element is added in the last element so that the list is 
// circular.
// While traversing the linked list we create a temp pointer.
// Temp pointer points to head so that while traversing orignal head i.e. 1st element 
// address is not lost.
// At the tail i.e. last element of linked list :
//            temp -> next = head points at head
// and        temp = temp -> next   
// temp will now be our head 
// or
// while traversing we can simply put a condition 
// do{
//     temp = temp -> next;
// }
// while(temp != head);
// this will stop when temp is head


// Q2. What are the practical applications of a circular linked list?

// A2. 1)In many games, mainly in multiplayer games, players are placed in a circular 
//          linked list to that each players' turn come one after other.
//        2)switching tabs in macos using command + tab.
//        3)The loop option in music players creates a circular linked list.


// code for Question 1 :-
#include <iostream>
using namespace std ;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    
    // for an empty linked list
    if(head == NULL){
        n -> next = n;          // address save
        head = n;               // head alloted
        return;

    }

    Node* temp = head;          // temp pointer created so head isn't lost
    // last node traversion
     while(temp -> next != head){
        temp = temp -> next;
    }

    temp -> next = n;
    n -> next = head;
    head = n;                   // reassignment of new node as head

}
void insertAtTail(Node* &head, int val){
    //if linked list is empty
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    // traversing to last node 
    while(temp -> next != head){
        temp = temp -> next;
    }

    temp -> next = n;
    n -> next = head;           // linked last element to head to make it circular
}

void display(Node* head){
    Node* temp = head;
    cout << temp -> data <<" ";
    while(temp -> next != head){
        temp = temp-> next;
        cout << temp -> data <<" ";

    }
    cout<< endl;
}
void deleteAtHead(Node* &head){
    Node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;

    }
    Node* todelete = head;      //pointer to delete dynamic node
    temp -> next = head -> next;
    head = head -> next;

    delete todelete;

}
void forDelete(Node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count != pos - 1){
        temp = temp -> next;
        count++;
    }
    Node* todelete = temp -> next;
    temp->next = temp-> next-> next;

    delete todelete;
}

int main(){
    Node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    display(head);
    insertAtHead(head,50);
    display(head);
    forDelete(head, 5);
    display(head);
    forDelete(head, 1);
    display(head);
}