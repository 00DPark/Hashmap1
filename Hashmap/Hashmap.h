#pragma once
#include <iostream>
#include <string>
//#include "../../ListTemplate/ListTemplate/Dynamic_List.h"
#include "C:\Users\parker.1629\source\repos\ListTemplate\Debug\ListTemplate/Dynamic_List.h"

using namespace std;

template <class K, class V>
class Pair
{
public:
	//default constructor
	Pair()
	{

	}

	//pair constructor
	Pair(K term, V definition)
	{
		t = term;
		d = definition;
	}

private:
	//private variables that will hold each individual pair and definition value
	K t;
	V d;
};
//do I still need to use the pair method?
template <class K, class V>
class Hashmap
{
	
private:
	//declare private variables
	//numbers in the array
	int size;

	//the length of the array/amount of space in the array
	int length;

	//gives the pointer of the arr the data type of t
	Hashmap<K,V>* arr;

	//hold the pair pointer and a variable that will keep count of the index
	Pair* p;
	int count = 0;
	Hashmap<K,V> buckets[5];

public:
	//constructor
	Hashmap();

	//prototyping the methods

	Pair<K,V> removeElement(K term);

	int Length();


	//prototyping the Pair class
	Pair createsPair(K term, V definition);
	int findASCIII(char c);
	int hash(K term);
	void addToBuckets(Pair<K, V> p);
	Pair<K, V> findValue(K term);
	void sortBuckets(int length, K term);
	
	//destructor
	~Hashmap();

	/*
	We are going to establish a pair key that will assign two strings to each other
	We are also going to implement a bucket system by classifying each bucket of arrays by the first letter of their name exactly like an actual dictionary
	We are going to have to modify the addElement and removeElement methods to account for the two strings
	We are also going to need to implement a lookup method that will first determine which bucket to look at then search through
	the bucket until the method finds the wanted values/pair. Then the value is returned.
	We shouldn't have to implement a find pair class and instead we can use the pair method/class already implemented by C++ in order to pair two like things
	In this case the two strings that are going to be paired are the term and definition
	
	*/
};


