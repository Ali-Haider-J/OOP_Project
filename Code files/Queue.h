#pragma once
#include "Node.h"

class Queue
{
private:
    length;
    Queue instance;
    Node* head;
    Node* tail;
    Queue();
public:
    ~Queue();
    Queue getInstance();
    void move();
    void clean();
    void enqueue(Object *);
};
