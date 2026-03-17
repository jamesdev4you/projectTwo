
#ifndef QUEUE
#include "node.h"
#include <stdexcept>

#define QUEUE
template <typename T>
class Queue
{
private:
    Node<T> *front = nullptr;
    Node<T> *back = nullptr;

public:
    Queue() {};

    ~Queue()
    {
        while (!is_empty()) {
            dequeue();
        }
    };

    bool is_empty() {
        return front==nullptr;
    }

    void enqueue(T data)
    {
        Node<T>* new_node = new Node<T>(data);
        // Set front and back to the same node if the list was empty
        if (is_empty())
        {
            front = back = new_node;
            // Point back to front for circular link
            back->next = front;
            return;
        }

        new_node->next = front;
        back->next = new_node;
        back = new_node;
    };

    void dequeue()
    {
        // Return on empty list
        if (is_empty()) return;

        if (front == back) {
            delete front;
            front = back = nullptr;
            return;
        }
        // Set front to next in line
        Node<T>* old_front = front;
        front = front->next;
        back->next = front;
        delete old_front;
    };

    // Returns the frontmost Node in the list. Throws an error if the list is empty
    const T& peek() {
        if (is_empty()) {
            throw std::out_of_range("List is empty");
        }

        return front->data;
    }
};

#endif
