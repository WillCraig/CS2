//|=======================|
//|     William Craig     |
//| assembler - project 3 |
//|  CS 23001 Fall 2021   |
//|=======================|

#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer: William Craig
// Updated:    Fall 2021
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>
//#include "../String/string.hpp"

////////////////////////////////////////////////////////////////////////////
//
template <typename T>
class Node
{
public:
	Node() : next(0) {}
	Node(const T &obj) : data(obj), next(0){};
	T data;		   // data being stored in node
	Node<T> *next; // pointer to next node
};

////////////////////////////////////////////////////////////////////////////
// CLASS INV: if empty, TOS == nullptr
//
//
template <typename T>
class stack
{
public:
	stack();
	stack(const stack<T> &obj);
	~stack();

	void swap(stack<T> &);

	stack<T> &operator=(stack<T>);

	bool empty() const;
	bool full() const;
	T top() const;
	T pop();

	void push(const T &);

private:
	Node<T> *tos;
};

// +++++++ Default Constructor +++++++
// set tos to nullptr to create empty stack
template <typename T>
stack<T>::stack()
{
	tos = 0; // set to nullptr
}

// +++++++ Copy Constructor +++++++
// REQUIRES: Stack object to copy
// ENSURES : *this now direct copy of passed obj
template <typename T>
stack<T>::stack(const stack<T> &obj) : stack<T>()
{
	Node<T> *temp = obj.tos;
	Node<T> *bottom;

	while (temp != 0)
	{
		if (tos == 0)
		{
			// if at end of list, set bottom as this
			tos = new Node<T>(temp->data);
			bottom = tos;
		}
		else
		{
			// add next Node to bottom
			bottom->next = new Node<T>(temp->data);
			bottom = bottom->next;
		}
		// set head of stack to temp after each iteration
		temp = temp->next;
	}
}

// +++++++ Destructor +++++++
// remove all Nodes from the stack
// return this as empty stack
template <typename T>
stack<T>::~stack()
{
	Node<T> *temp;
	// until top is null or stack is empty
	while (tos != 0)
	{
		// set temp as pointer to current top
		temp = tos;

		// shift top to next
		tos = tos->next;

		// delete temp/previous top
		delete temp;
	}
}

// +++++++ swap +++++++
// set value of this to passed object
// set value of passed object to this
template <typename T>
void stack<T>::swap(stack<T> &rhs)
{
	Node<T> *temp = tos;
	tos = rhs.tos;
	rhs.tos = temp;
}

// +++++++ Overload Assignment Operator +++++++
// copy passed stack object to this
template <typename T>
stack<T> &stack<T>::operator=(stack<T> rhs)
{
	swap(rhs);
	return *this;
}

// +++++++ empty +++++++
// return bool to see if top of stack is nullptr
template <typename T>
bool stack<T>::empty() const
{
	return tos == 0;
}

// +++++++ full +++++++
// bool to determine whether the stack is full or not
// return true/false for whether stack is full
template <typename T>
bool stack<T>::full() const
{
	Node<T> *temp = new (std::nothrow) Node<T>();
	if (temp == 0)
	{
		return true;
	}
	delete temp;
	return false;
}

// +++++++ top +++++++
// return the data stored in the top of the stack
// returns type of stack
template <typename T>
T stack<T>::top() const
{
	if (!empty())
	{
		// if not empty, return data of TOS
		return tos->data;
	}
	else
	{
		return T();
	}
}

// +++++++ pop +++++++
// remove the top item in the stack
// returns item removed from the top of stack.
template <typename T>
T stack<T>::pop()
{
	if (!empty())
	{
		// store data from top
		T result = tos->data;
		// set top to next item in stack
		tos = tos->next;
		return result;
	}
	else
	{
		return T();
	}
}

// +++++++ push +++++++
// add a new node to the stack
// requires a node object (obj)
template <typename T>
void stack<T>::push(const T &obj)
{
	if (!full())
	{
		Node<T> *temp = new Node<T>(obj);
		// set tos to the next available space
		temp->next = tos;
		// set top as
		tos = temp;
	}
}

#endif
