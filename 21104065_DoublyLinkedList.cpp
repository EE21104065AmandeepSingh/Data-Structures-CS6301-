//Name : Amandeep Singh
//SID : 21104065

#include <iostream>
#include <string.h>
using namespace std ;

//redifining node with 4 elements
class Node{
    
    public:
    Node* prev;
    string name;
    int age;
    Node* next;

    //constructor
    Node(string name , int age){
        this->name = name ;
        this->age = age;
        this->next = NULL ;
        this->prev = NULL ;
    }
};
int main(){
    cout<<endl;


    Node* first = NULL ;
    Node* second = NULL ;
    Node* third = NULL ;
    Node* fourth = NULL ;


    first = new Node("Raman", 29);   // Added siblings' name
    second = new Node("Sandeep", 25);
    third = new Node("Aman", 20);
    fourth = new Node("Yash", 18);


    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = NULL;  

    first -> prev = NULL;
    second -> prev = first; 
    third -> prev = second;
    fourth -> prev = third; 


    Node* eye;
    eye = first;
    while(eye != NULL){
        cout<<eye->name<<" : "<<eye->age<<endl<<endl;
        eye = eye->next;
    }

    cout<<endl;
    return 0;
}