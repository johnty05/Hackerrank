/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    Node *past,*cur,*next;
    cur=head;
    past=NULL;
    while(cur!=NULL){
        next=cur->next;
        cur->next=past;
        past=cur;
        cur=next;
        
    }
    head=past;
    return head;
}

//The basic concept behind this algorithm is the old classic Swapping Method. Just the difference is
//that here we deal with -> because of use of pointer variables instead of objects.
