/**
*	@file : Node.h
*	@author : Ethan Ward
*	@date : 2015.02.12
*	@brief: Creates Nodes and sets/gets their next pointers and values.
*/
#ifndef NODE_H
#define NODE_H

class Node {

public:
/**
	*  @pre None
	*  @post Creates and initializes a Node instance with m_next set to nullptr and m_value set to 0
	*  @return None
	*/
	Node();
/**
	*  @pre None
	*  @post Sets the value of a node to the number that is taken in.
	*  @return None
	*/
	void setValue(int val);
/**
	*  @pre None
	*  @post None
	*  @return Returns the value of a node
	*/
	int getValue();
/**
	*  @pre None
	*  @post Sets the pointer of a Node to the taken in Node pointer.
	*  @return None
	*/
	void setNext(Node* prev);
/**
	*  @pre None
	*  @post None
	*  @return Returns the pointer of a node.
	*/
	Node* getNext();

private:
	int m_value;
	Node* m_next;

};

#endif
