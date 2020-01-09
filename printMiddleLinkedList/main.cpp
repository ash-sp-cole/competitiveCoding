#include < iostream>

class Node
{

public:
    int data{};
    Node *next;


};

int main()
{


Node *head = NULL;
Node *second = NULL;
Node *third = NULL;
Node *fourth = NULL;


head = new Node();
second = new Node();
third = new Node();
fourth = new Node();


head->data = 1;
head-> next = third;

second ->data = 2;
second -> next = fourth;

third -> data = 3;
third -> next = second;

fourth ->data = 4;
fourth->next = NULL;


while (head != NULL) {

    std::cout << head->data << " ";
    head = head->next;


};
    return 0;
}