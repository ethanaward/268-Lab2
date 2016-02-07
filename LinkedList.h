/**
*	@file : LinkedList.h
*	@author : Ethan Ward
*	@date : 2015.02.12
*	@brief: Creates Linked Lists, which are series of nodes. Adds and removes nodes to and from the front and back of the list. Searches the list for a value. Prints all the values in a list.
*/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

class LinkedList {

public:
/**
	*  @pre None
	*  @post Initializes a Linked List instance with the front set to nullptr and the size set to 0
	*  @return None
	*/
	LinkedList();
/**
	*  @pre A Linked List is being deleted
	*  @post Deletes every node in the linked list
	*  @return None
	*/
	~LinkedList();
/**
	*  @pre None
	*  @post None
	*  @return Returns true if the list is empty, false if it isn't
	*/
	bool isEmpty() const;
/**
	*  @pre None
	*  @post None
	*  @return Returns the size of the list.
	*/
	int size() const;
/**
	*  @pre None
	*  @post Searches through the linked list for the given value.
	*  @return Returns true if the list has the value, false if it doesn't.
	*/
	bool search(int value) const;
/**
	*  @pre None
	*  @post Goes through the linked list and prints out every value in it.
	*  @return None
	*/
	void printList() const;
/**
	*  @pre None
	*  @post Adds a node to the back of the list.
	*  @return None
	*/
	void addBack(int value); 
/**
	*  @pre None
	*  @post Adds a node to the front of the list.
	*  @return None
	*/
	void addFront(int value);
/**
	*  @pre None
	*  @post Removes a node from the back of the list if possible.
	*  @return Returns true if the node was removed, false if it wasn't,
	*/
	bool removeBack();
/**
	*  @pre None
	*  @post Removes a node from the front of the list if possible.	
	*  @return Returns true if the node was removed, false if it wasn't.
	*/
	bool removeFront();
/**
	*  @pre None
	*  @post Prints out a menu with all of the tasks that the class can do.
	*  @return None
	*/
	void printMenu();

private:
	Node* m_front;
	int m_size;
};

#endif
