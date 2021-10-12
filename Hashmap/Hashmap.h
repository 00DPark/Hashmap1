#pragma once
#include <iostream>
#include <string>
#include "Dynamic_List.h"
#include "Dynamic_List.cpp"
using namespace std;

//do I still need to use the pair method?
template <class K, class V>
class Hashmap
{
	
private:
	//declare private variables


	//gives the pointer of the arr the data type of t
	

	//hold the pair pointer and a variable that will keep count of the index
	//Pair<K, V>* p;
	int count = 0;
	Dynamic_List<K,V>* buckets[5];

public:
	//constructor
	Hashmap();

	//prototyping the methods
	
	Pair<K,V> removeElement(K term);

	int Length();


	//prototyping the Pair class
	Pair<K, V> createsPair(K term, V definition);
	int findASCIII(char c);
	int hash(K term);
	void addToBuckets(Pair<K, V>* p);
	V findValue(K term);
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


