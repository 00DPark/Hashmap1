#include "Hashmap.h"
#include <iostream>
#include <string>
using namespace std;

//templates the class meaning that the variable is treated as T then the type of variable is changed in the source file
template <class K,class V>

//constructor
Hashmap<K,V>::Hashmap()
{

	//buckets = { list1,list2,list3,list4,list0 };
	for (int i = 0; i < 5; i++)
	{
		buckets[i] = new Dynamic_List<K, V>();
	}
}


//searches through array for value then removes and slides all other elements down one
template <class K,class V>
Pair<K,V> Hashmap<K, V>::removeElement(K term)
{
	int index = hash(term);
	return buckets[index]->removeElement(term);
}

//accessor method for length so it can be utilized in the source file
template <class K, class V>
int Hashmap<K,V>::Length()
{
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		num += buckets[i]->length();
	}
	return num;
}


template<class K,class V>
Pair<K,V> Hashmap<K,V>::createsPair(K term, V definition)
{
	Pair pair1(term, definition);
	
}

//returns the ASCIII value of the string;
template<class K, class V>
int Hashmap<K,V>::findASCIII(char c)
{
	int num = (int)c;
	return c;
}

template<class K, class V>
int Hashmap<K, V>::hash(K term)
{
	int value = 0;
	for (int j = 0; j < term.length(); j++)
	{
		value += findASCIII(term[j]);
	}
	return value%5;
}

//create the buckets that we will implement
template<class K, class V>
void Hashmap<K, V>::addToBuckets(Pair<K,V>* p)
{
	
	//goes through the original huge dynamically resizable list then goes letter by letter through the word and adds up the ASCI
	buckets[hash(p->getKey())]->addElement(p);

}
template <class K, class V>
V Hashmap<K, V>::findValue(K term)
{
	int index = hash(term);
	return buckets[index]->findValue(term);
}



//template for the destructor
template <class K, class V>
Hashmap<K,V>::~Hashmap()
{
}
