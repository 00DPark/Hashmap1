#pragma once
#include <iostream>
#include <string>
using namespace std;
template <class K, class V>
class Pair
{
public:
	K getKey();
	V getValue();
	Pair(K key, V value);
	Pair();
private:
	K key;
	V value;
};

template <class K, class V>
class Dynamic_List
{
	
	
private:
	//declare private variables
	//numbers in the array
	int size;

	//the length of the array/amount of space in the array
	int length;

	//gives the pointer of the arr the data type of t
	Pair<K,V>* arr;
	void increaseSize();

public:
	//constructor
	Dynamic_List(int length)
	{
		this->length = length;

		//intializes the pointer to become an array
		arr = new int[size];
	}

	//prototyping the methods
	void addElement(Pair<K, V>* p);
	Pair<K, V> removeElement(K key);
	int Length();
	void printList();
	Dynamic_List();
	V findValue(K key);
	//destructor
	~Dynamic_List();
};

