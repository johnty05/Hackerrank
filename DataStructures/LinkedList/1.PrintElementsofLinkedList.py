/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
using namespace std;
void Print(Node *head)
{
    if(head){
    cout << head->data << endl;
    Print(head->next);
  }
}
//We are making it sure that the HEAD of the Linked List is TRUE i.e. it is not NULL
