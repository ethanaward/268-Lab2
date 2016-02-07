/**
*	@file : LinkedList.h
*	@author : Ethan Ward
*	@date : 2015.02.12
*	@brief: Creates Pokemon and changes their values when needed.
*/
#include "LinkedList.h"

LinkedList::LinkedList() {
m_front = nullptr;
m_size = 0;
}

LinkedList::~LinkedList() {
Node* temp;
Node* temp2;
temp = m_front;
temp2 = temp;

while(temp != nullptr) {
	temp = temp->getNext();
	delete temp2;
	temp2 = temp;
}

}

bool LinkedList::isEmpty() const {
if(size() == 0) {
	return(true);
}

else {
	return(false);
}

}

int LinkedList::size() const {
return(m_size);
}

bool LinkedList::search(int value) const {
Node* temp;
temp = m_front;

while(temp != nullptr) {
	if(temp->getValue() == value) {
		return(true);
	}
	temp = temp->getNext();
}

return(false);
}

void LinkedList::printList() const {
if(isEmpty()) {
	std::cout << "List Empty.";
}

else {
	Node* temp;
	temp = m_front;
	while(temp != nullptr) {
		std::cout << temp->getValue() << " ";
		temp = temp->getNext();
	}
}

}

void LinkedList::addBack(int value) {
Node* temp = new Node();
Node* temp2;
temp->setValue(value);

if(m_size == 0) {
	m_front = temp;
	m_size++;
}


else if (m_size == 1) {
	m_front->setNext(temp);
	m_size++;
}

else {
	temp2 = m_front;

	while(temp2->getNext() != nullptr) {
		temp2 = temp2->getNext();
	}
	temp2->setNext(temp);
	m_size++;
	
}



} 

void LinkedList::addFront(int value) {
Node* temp = new Node();
temp->setNext(m_front);
temp->setValue(value);

m_front = temp;
m_size++;

}

bool LinkedList::removeBack() {
if(isEmpty()) {
	return(false);
}

else {
	Node* temp;
	Node* temp2;
	temp = m_front;
	temp2 = temp;
	while(temp->getNext() != nullptr) {
		temp = temp->getNext();
		if(temp2->getNext()->getNext() == nullptr) {
		temp2->setNext(nullptr);	
		}
		temp2 = temp;
	}

	delete temp;
	m_size--;
	if(isEmpty()) {
	m_front = nullptr;
}

}


return(true);
}

bool LinkedList::removeFront() {
if(isEmpty()) {
	return(false);
}

Node* temp;
temp = m_front;
m_front = m_front->getNext();

delete temp;
m_size--;
return(true);
}

void LinkedList::printMenu()
{
	std::cout << "\n\nSelect from the following menu:\n"
			<< "1) Add to the front of the list\n"
			<< "2) Add to the end of the list\n"
			<< "3) Remove from front of the list\n"
			<< "4) Remove from back of the list\n"
			<< "5) Print the list\n"
			<< "6) Search for value\n"
			<< "7) Exit\n"
			<< "Enter your choice: ";
}


