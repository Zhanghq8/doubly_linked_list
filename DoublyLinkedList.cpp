//*****************************************************************************
//  This source file contains the DoublyLinkedList class definitions.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
    head = NULL;
}


int DoublyLinkedList::countNode()
{
	int count = 0;
	Node* temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return count;
}

bool DoublyLinkedList::setNode(int data, int index)
{
	int count = countNode();
	if (index < 0 || index > count)
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)" << std::endl;
		return false;
	}
	else
	{
		Node* temp2 = head;
		for (int i = 0; i < index-1; i++)
		{
			temp2 = temp2->next;
		}
		temp2->data = data;
		return true;
	}
}

bool DoublyLinkedList::insertNode(int data, int index)
{
	int count = countNode();
	if (index < 0 || (count == 0 && index >1))
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)." << std::endl;
		return false;
	}
	else
	{
		Node* temp1 = new Node();
		temp1->data = data;
		temp1->next = NULL;
		temp1->previous = NULL;
		if (index == 1)
		{
			if (head == NULL)
			{
				head = temp1;
				return true;
			}
			else
			{
		    	head-> previous = temp1;
		    	temp1-> next = head;
		    	head = temp1;
		    	return true;
			}
		}
	    else
	    {
	    	Node* temp2 = head;
	    	for (int i = 0; i < index-2; i++)
	    	{
	    		temp2 = temp2->next;
	    	}
	    	Node* temp3 = temp2->next;
	    	temp1->next = temp3;
	    	temp1->previous = temp2;
	    	temp2->next = temp1;
	    	temp3->previous = temp1;
	    	return true;
	    }	
	}
}

bool DoublyLinkedList::insertEnd(int data)
{
	Node* temp1 = new Node();

	if (head == NULL)
	{
		temp1->data = data;
		temp1->next = NULL;
		temp1->previous = NULL;
		head = temp1;
		return true;
	}
	else
	{
		temp1 = head;		
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		Node* temp2 = new Node();
		temp2->data = data;
		temp2->next = NULL;
		temp2->previous = temp1;
		temp1->next = temp2;
		return true;
	}
}


bool DoublyLinkedList::deleteNode(int index)
{
	int count = countNode();
	if (index < 0 || index > count)
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)." << std::endl;
		return false;
	}
	else
	{
		Node* temp1 = head;
		if (index == 1)
		{
			head = temp1->next;
			Node* temp2 = temp1->next;
			temp2-> previous = NULL;
		}
		else
		{
			for (int i = 0; i < index - 2; i++)
			{
				temp1 = temp1->next;
			}
			Node* temp2 = temp1->next;
			Node* temp3 = temp2->next;
			temp1->next = temp2->next;
			temp3->previous = temp1;
			return true;
		}
	}
}

bool DoublyLinkedList::deleteEnd()
{
	int index = countNode();
	if (index == 0)
	{
		std::cout << "Empty list" << std::endl;
		return false;
	}
	else
	{
		Node* temp1 = head;
		for (int i = 0; i < index - 2; i++)
		{
			temp1 = temp1->next;
		}
		Node* temp2 = temp1->next;
		temp1->next = temp2->next;
		delete temp2;
		return true;
	}
}


bool DoublyLinkedList::reverseList()
{
	int count = countNode();
	if (count == 0)
	{
		std::cout << "Empty list" << std::endl;
		return false;
	}
	else
	{
		Node* current;
		Node* temp1;
		current = head;
		while (current != NULL)
		{
			Node* temp = current->next;
			temp1 = current;
			current->next = current->previous;
			current->previous = temp;
			current = current->previous;
		}
		head = temp1;
		return true;
	}	
}



// // bool DoublyLinkedList::clearList()
// // {

// // 	index = countNode();


// // }


bool DoublyLinkedList::displayNode(int index)
{
	int count = countNode();
	if (count == 0)
	{
		std::cout << "Empty list" << std::endl;
		return false;
	}
	if (index < 0 || index > count)
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)." << std::endl;
		return false;
	}
	else
	{
		Node* temp = head;
		for (int i = 0; i < index-1; i++)
		{
			temp = temp->next;
		}
		std::cout << temp->data << std::endl;
		return true;
	}
}

bool DoublyLinkedList::displayList()
{
	int count = countNode();
	if (count == 0)
	{
		std::cout << "Empty list." << std::endl;
		return false;
	}
	else
	{
		Node* temp = head;
		while (temp != NULL)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << "" << std::endl;
		return true;
	}
}

bool DoublyLinkedList::displayRList()
{
	int count = countNode();
	if (count == 0)
	{
		std::cout << "Empty list." << std::endl;
		return false;
	}
	else
	{
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		while (temp != NULL)
		{
			std::cout << temp->data << " ";
			temp = temp-> previous;
		}
		std::cout << "" << std::endl;
		return true;
	}
}

DoublyLinkedList::~DoublyLinkedList()
{

}
