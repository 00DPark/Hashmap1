#include <iostream>
#include <Windows.h>
#include <string>
#include <map>
#include "Hashmap.h"
#include "Hashmap.cpp"

using namespace std;

/*it is going to be extremely similar to the dynamically resizeable list but it's essentially
going to be like five dynamically resizeable lists that you first want to break down to find
which list you want to search through somehow and then search through that specific list
for the word or phrase
*/
int main()
{
	Hashmap<string,string>dict = Hashmap<string, string>();
	boolean quit = false;
	boolean stop = true;
	string term = "";
	string definition = "";
	Pair <string, string>* p = new Pair <string, string>();
	string findTerm = "";
	string removeTerm = "";
	while (quit == false)
	{
		cout << "Enter the name of the term or Enter Q to quit" << endl;
		cin >> term;
		if (term == "Q")
		{
			break;
		}
		cout << "Enter the definition of the term" << endl;
		cin >> definition;
		p = new Pair<string, string>(term, definition);
		dict.addToBuckets(p);
	}

	while (stop ==  true)
	{
		cout << "Enter the term you want to find or Q to quit" << endl;
		cin >> findTerm;
		if (findTerm == "Q")
		{
			break;
		}
		cout << dict.findValue(findTerm) << endl;
	}

	while (true)
	{
		cout << "Enter value to remove or Q to quit" << endl;
		cin >> removeTerm;
		if (removeTerm == "Q")
		{
			break;
		}
		*p=dict.removeElement(removeTerm);
		cout << p->getKey() <<" " << p->getValue() << endl;
	}
	

		


	system("pause");
}