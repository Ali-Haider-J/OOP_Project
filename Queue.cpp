#include "Queue.h"

Queue::Queue()
{
    head = NULL;
    tail = NULL;
}

Queue::enqueue(Object *o)
{
    if (head == NULL)
    {
        head = new Node();
        head->object = o;
        //head->
        length++;
    }
    else
    {
        tail->next =  new Node();
        tail->next->prev = tail;
        tail = tail->next;
        tail->data=data;
        length++;
    }
}

Queue::clean()
{
    while (length !=0)
    {

        if(head!=NULL)
        {
           Node* temp = tail;
           tail = tail ->prev;
           delete temp;
           temp = NULL;
           length--;
        }
    }
}
