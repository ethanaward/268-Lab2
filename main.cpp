/**
*	@file : LinkedList.h
*	@author : Ethan Ward
*	@date : 2015.02.12
*	@brief: Creates Pokemon and changes their values when needed.
*/
#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main() {

int choice = 0;
int input = 0;

LinkedList* list = new LinkedList();

while(choice != 7) {
list->printMenu();
std::cin >> choice;
std::cout << "You chose: " << choice << "\n";

if(choice == 1 || choice == 2) {
	std::cout << "Input a value to add:";
	std::cin >> input;
	std::cout << "Adding " << input << " to the list";
	if(choice == 1) {
		list->addFront(input);
	}
	if(choice == 2) {
		list->addBack(input);
	}
}

if(choice == 3) {
	std::cout << "Attempting removal from front of list \n";
	if(list->removeFront()) {
		std::cout << "Removal successful";	
	}
	else {
		std::cout << "There are no values to remove.";
	}
}

if(choice == 4) {
	std::cout << "Attempting removal from back of list \n";
	if(list->removeBack()) {
		std::cout << "Removal successful";	
	}
	else {
		std::cout << "There are no values to remove.";
	}
}

if(choice == 5) {
	std::cout << "Printing list: \n";
	list->printList();
}

if(choice == 6) {
	std::cout << "Enter a value to search for:";
	std::cin >> input;
	std::cout << "Searching for " << input << "... \n";
	if(list->search(input)) {
		std::cout << input << " is in the list";
	}
	else {
		std::cout << input << " is not in the list";
	}
}

if(choice < 1 || choice > 7) {
	std::cout << "Invalid choice.";
}

}

std::cout << "Exiting... \n";

delete list;

};





#endif
