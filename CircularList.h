//
// Created by etudiant on 18-06-04.
//

#ifndef CIRCULARLIST_CIRCULARLIST_H
#define CIRCULARLIST_CIRCULARLIST_H

#include <stdexcept>

template <typename Object>
class CircularList {
private:
    struct Node{
        Node(const Object &pData=0,Node* pNext=0);
        Object data;
        Node* next;
    };

public:
    class iterator{
    public:
        iterator();
        Object &operator*();
        const Object &operator*() const;
        iterator &operator++();
        iterator operator++(int);
        bool operator==(const iterator &rhs) const;
        bool operator!=(const iterator &rhs) const;

    private:
        Node* current;
        iterator(Node* p);
        friend  class CircularList<Object>;
    };

public:
    CircularList();
    CircularList(const CircularList &rhs);
    ~CircularList();
    const CircularList &operator=(CircularList &rhs);
    iterator begin();
    iterator end();
    void pop_front();
    void pop_back();
    const int &size() const;
    bool empty() const;
    void clear();
    Object &front();
    Object &back();
    void push_front(const Object &x);
    void push_back(const Object &x);
    iterator insert(const iterator &itr, const Object &x);
    iterator erase(const iterator &itr);

private:
    int theSize;
    Node* head;
    Node* tail;
    void init();

};


#endif //CIRCULARLIST_CIRCULARLIST_H
