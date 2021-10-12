#include "Dynamic_List.h"
#include <iostream>
#include <string>
using namespace std;

//templates the class meaning that the variable is treated as T then the type of variable is changed in the source file
template <class K, class V>
//constructor
Dynamic_List<K,V>::Dynamic_List()
{
	size = 0;
	length = 1;
	arr = new Pair<K, V>[1];
}

template<class K, class V>
Pair<K, V>::Pair(K key, V value)
{
	this->key = key;
	this->value = value;
}
template<class K, class V>
Pair<K, V>::Pair()
{
	
}
template <class K, class V>
K Pair<K, V>::getKey()
{
	return key;
}

template <class K, class V>
V Pair<K, V>::getValue()
{
	return value;
}
template <class K, class V>
V Dynamic_List<K, V>::findValue(K key)
{
	V search;
	for (int i = 0; i < length; i++)
	{
		if (arr[i].getKey() == key)
		{
			search= arr[i].getValue();
		}
	}
	return search;
}


template <class K, class V>
//doubles the size of the array every time the array is halfway filled
void Dynamic_List<K,V>::increaseSize()
{
	length *= 2;
	Pair<K,V>* n = new Pair<K,V>[length];
	for (int i = 0; i < length/2; i++)
	{
		n[i] = arr[i];
	}
	arr = n;
}

//adds an element to the end of the last filled spot in the array
template <class K, class V>
void Dynamic_List<K,V>::addElement(Pair <K,V>* p)
{
	
	if (size== length-1)
	{
		increaseSize();
	}
	
	
	arr[size] = *p;
	size++;
}

//searches through array for value then removes and slides all other elements down one
template <class K, class V>
Pair<K,V> Dynamic_List<K,V>::removeElement(K key)
{
	Pair <K, V> pair;
	bool foundValue = false;
	for(int i=0; i< size; i++)
	{
		if (arr[i].getKey() == key ) {
			foundValue = true;
			pair = Pair<K,V>(arr[i].getKey(), arr[i].getValue());
		}
		if (foundValue && i<length-1)
		{
			arr[i] = arr[i + 1];
		}
	}
	if (foundValue)
	{
		size--;
	}
	
	return pair;
	
}

//accessor method for length so it can be utilized in the source file
template <class K, class V>
int Dynamic_List<K,V>::Length()
{
	return length;
}

//prints the list
template <class K, class V>
void Dynamic_List<K,V>::printList()
{
	for (int i = 0; i < size; i++)
	{
		printf("Element %i of array is %i\n", i, arr[i]);
	}
}

//template for the destructor
template <class K, class V>
Dynamic_List<K,V>::~Dynamic_List()
{
}
