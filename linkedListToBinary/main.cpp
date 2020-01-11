#include <iostream>

struct Node{

int data{};
Node* next{};

};


struct Node* build() {

 Node* head = NULL;
 Node* second = NULL;
 Node* third = NULL;

  
head = new Node();
second = new Node();
third = new Node();


head->data = 1;
head-> next = second;

second->data =2;
second->next = third;

third ->data = 3;
third->next == NULL;

return head;
};





int main () {














return 0;

}