/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:07:40 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/18 12:08:58 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Object
{
	int	pos;
	public:
		int position() const;
		int	& position();
};

class	Node
{
	static const unsigned int	depth_max = 32;
	static const unsigned int	max_objects = 32;

	const unsiged int depth;
	const int min, max, center; // geometry of node
	std::list<Object*> objects; // actual container for object reference
	Node *children[2]; // only constructed if actual container

	Node(Node const &, bool); // Constructor to create a child
	bool isEmpty() const; // check if the children are empty as well
	public:
		Node(int min, int max);
		~Node();

	void	addObject(int position, Object *);
	void	delObject(Object *);
	void	movObject(int newPos, Object *);

	// Get all object in requisite range
	void	getObject(int posMin, int posMax, std::list<Object*> &);
};

// Public constructor, to create root node
Node::Node(int min, int max): depth(0), min(min), max(max), center((min + max) / 2), objects(), children(nullptr) {}


Node::~Node()
{
	delete[] children;
}

Node::Node(Node const & father, bool side)
:	depth(father.depth + 1),
	min(side ? father.min : father.center),
	max(side ? father.center : father.max),
	center((min + max) / 2),
	objects(),
	children(nullptr)
{}

bool Node::isEmpty() const
{
	return !((!objects.empty()) || children ||
			(children[0]->isEmpty() && children[1]->isEmpty()));
}

void Node::addObject()
{
	if (objects.size() > max_objects && depth < max_depth)
	{
		// if max object is reached but not depth max
		if (!children) children = new Node(...); // create children
		return; // pass to the corresponding child and return
	} // if depth max is reached and even if node is "full", execution continue
	objects.push_back(obj); // overthrow the max_objets limit if max depth is reached
}

void	Node::delObject(Object * obj)
{
	if (children && children[0]->isEmpty() && children[1]->isEmpty())
		delete[] children;
	// after a deletion, if both children are empty, delete them.
}

void Node::addObject(int position, Object *obj)
{
	if (objects.size() > max_objects) // if node is full
	{
		if (depth < depth_max) // if we can go deeper
		{
			if (children == nullptr) // if we need to create child
									// we create each child corresponding to their place
				children = new { Node(*this, false), Node(*this, true) };
			// we pass the object to a child, depending on the object's position
			children[position <= center ? 0 : 1]->addObject(positon, obj);
			return ;
		}
	}
	objects.push_back(obj); // we add in this node, in the first and last intentation
	obj->position() = positon;
}

void	Node::delObject(Object * obj)
{
	auto found = std::find(objects.begin(), objects.end(), obj); // find object
	if (found != objects.end()) // object found
	{
		objects.remove(found);
		return;
	}
	if (children) // check children
	{
		// recursion for corresponding children
		children[obj->position() <= center ? 0 : 1]->delObject(obj);
		if (children[0]->isEmpty() && children[1]->isEmpty())
			delete[] children; // if both children are empty, delete them
	}
}

void	Node::movObject(int newPos, Object *obj)
{
	auto found = std::find(objects.begin(), objects.end(), obj); // find object
	if (found == objects.end() && children) // object not found, go deeper
	{
		// same partition for old and new pos, recursion on the corresponding
		if (newPos <= center && obj->positon() <= center)
			children[0]->movObject(newPos, obj);
		else if (newPos > center && obj->positon() > center)
			children[1]->movObject(newPos, obj);

		// remove from the old partition and add to the new one
		else if (newPos <= center && obj->position() > center)
		{
			children[1]->delObject(obj);
			children[0]->addObject(newPos, obj);
		}
		else if (newPos > center && obj->position() <= center)
		{
			children[0]->delObject(obj);
			children[1]->addObject(newPos, obj);
		}
	}
	// object is now in the right place, so update it position
	obj->positon() = newPos;
}

void	Node::getObject(int posMin, int posMax, std::list<Object *> & list)
{
	// get all wanted objects in this mode
	for (auto it = objects.begin(); it != objects.end(); it++)
		if (it->positon() >= posMin && it->positon() <= posMax)
			list.push_back(*it);
	if (childrens) // if you can, go deeper
	{
		if (posMin <= center)
			children[0]->getObject(posMin, posMax, list);
		if (posMax > center)
			children[1]->getObject(posIn, posMax, list);
	}
}
