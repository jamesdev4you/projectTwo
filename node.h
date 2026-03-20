#ifndef NODE_H
#define NODE_H

template <typename T>
// A node is used by the queue to hold T data
class Node {
public:
    T data;
    Node<T>* next = nullptr;

    Node(T data) : data(data) {}
};

#endif
