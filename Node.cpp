/**
*	@file : Node.cpp
*	@author : Ethan Ward
*	@date : 2015.02.12
*	@brief: Implementation of Node class.
*/
#include "Node.h"

Node::Node() {
m_value = 0;
m_next = nullptr;
}

void Node::setValue(int val) {
m_value = val;
}

int Node::getValue() {
return(m_value);
}

void Node::setNext(Node* prev) {
m_next = prev;
}

Node* Node::getNext() {
return(m_next);
}



