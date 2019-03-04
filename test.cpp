//*****************************************************************************
//  This source file contains the DoublyLinkedList class test.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include <iostream>
#include "DoublyLinkedList.h"

int main()
{

	DoublyLinkedList nodelist;
	// nodelist.deleteEnd();
	// nodelist.reverseList();
	std::cout << nodelist.countNode() << std::endl;	
	nodelist.insertNode(1,1);
	nodelist.displayList();
	nodelist.displayRList();
	nodelist.insertNode(2,1);
	nodelist.displayList();
	nodelist.displayRList();
	nodelist.insertNode(3,1);
	nodelist.displayList();
	nodelist.displayRList();
	nodelist.insertNode(4,2);
	nodelist.displayList();
	nodelist.displayRList();
	nodelist.insertNode(5,1);
	nodelist.displayList();
	nodelist.displayRList();

	nodelist.insertEnd(2);

	nodelist.displayList();
	nodelist.displayRList();
	nodelist.deleteEnd();
	// nodelist.displayList();
	// nodelist.reverseList();
	nodelist.displayList();
	nodelist.displayRList();	
	nodelist.reverseList();
	nodelist.displayList();
	nodelist.displayRList();
	// nodelist.insertNode(2, 20);
	// nodelist.setNode(3, 20);
	// nodelist.deleteNode(1);
	// nodelist.displayList();
	// nodelist.displayRList();
	// nodelist.deleteNode(3);
	// nodelist.displayList();
	// nodelist.displayRList();

	// nodelist.displayNode(3)	;
	// Node* a = nodelist.head();
	// nodelist.printList(a);

}