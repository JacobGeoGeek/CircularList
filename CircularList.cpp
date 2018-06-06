//
// Created by etudiant on 18-06-04.
//

#include "CircularList.h"

template <typename Object>
CircularList<Object>::Node::Node(const Object &pData, CircularList::Node *pNext):data(pData),next(pNext) {

}
template <typename Object>
CircularList<Object>::iterator::iterator():current(0) {

}
template <typename Object>
Object &CircularList<Object>::iterator::operator*() {
    return current->data;
}
template <typename Object>
const Object &CircularList<Object>::iterator::operator*() const {
    return current->data;
}
template <typename Object>
typename CircularList<Object>::iterator &CircularList<Object>::iterator::operator++() {
    this->current= this->current->next;
    return *this;
}
template <typename Object>
CircularList::iterator CircularList::iterator::operator++(int) {
    iterator old = *this;
    ++(*this);
    return old;
}
template <typename Object>
bool CircularList::iterator::operator==(const CircularList::iterator &rhs) const {
    return this->current==rhs.current;
}
template <typename Object>
bool CircularList::iterator::operator!=(const CircularList::iterator &rhs) const {
    return this->current!=rhs.current;
}
template <typename Object>
CircularList<Object>::iterator::iterator(CircularList::Node *p):current(p) {

}



template <typename Object>
CircularList<Object>::CircularList() {
init();
}

template <typename Object>
CircularList::CircularList(const CircularList &rhs) {
init();
    *this=rhs;
}

template <typename Object>
CircularList<Object>::~CircularList() {
clear();
delete head;
    delete tail;
}
template <typename Object>
const CircularList<Object> &CircularList<Object>::operator=(CircularList &rhs) {
    if (this == &rhs){
        return *this;
    }
    clear();
    for(iterator itr =rhs.begin(); itr != rhs.end(); ++itr){
        push_back(*itr);
    }
    return *this;
}
template <typename Object>
typename CircularList<Object>::iterator CircularList<Object>::begin() {
    return iterator(head->next);
}
template <typename Object>
typename CircularList<Object>::iterator CircularList<Object>::end() {
    return iterator(tail);
}

void CircularList::pop_front() {

}

void CircularList::pop_back() {

}

const int &CircularList::size() const {
    return <#initializer#>;
}

bool CircularList::empty() const {
    return false;
}

void CircularList::clear() {

}

Object &CircularList::front() {
    return <#initializer#>;
}

Object &CircularList::back() {
    return <#initializer#>;
}

void CircularList::push_front(const Object &x) {

}

void CircularList::push_back(const Object &x) {

}

CircularList::iterator CircularList::insert(const CircularList::iterator &itr, const Object &x) {
    return CircularList::iterator();
}

CircularList::iterator CircularList::erase(const CircularList::iterator &itr) {
    return CircularList::iterator();
}

void CircularList::init() {

}


