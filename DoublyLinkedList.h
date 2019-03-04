//*****************************************************************************
//  This header file contains the DoublyLinkedList class declarations.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include <iostream>
#include <string>

struct Node
{
    int data;
    Node* next;
    Node* previous;
};

class DoublyLinkedList
{
private:
    Node* head;
    
public:
    
    //constructor
    DoublyLinkedList();

    //returns the number of node in current list
    int countNode();

    //modified a node at a specific position
    bool setNode(int data, int index);

    //insert a node at the end of the list
    bool insertEnd(int data);

    //insert a node at a specific position
    bool insertNode(int data, int index);

    //delete a node at a specific position
    bool deleteNode(int index);

    //delete last node
    bool deleteEnd();

    // // //delete all node in current list
    // // bool clearList();

    // reverse current list
    bool reverseList();

    //read node at a specific position
    bool displayNode(int index);

    //read current list forwardly
    bool displayList();

    //read current list reversly
    bool displayRList();
    
    //deconstructor
    ~DoublyLinkedList();
};

#endif