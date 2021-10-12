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
	Hashmap<string,string>dict();
	boolean quit = false;
	boolean stop = true;
	string term = "";
	string definition = "";
	string findTerm = "";
	while (quit == false)
	{
		cout << "Enter the name of the term or Enter Q to quit" << endl;
		cin >> term;
		if (term == "Q")
		{
			quit = true;
		}
		cout << "Enter the definition of the term" << endl;
		cin >> definition;
		dict.addtoBuckets(term, definition);
	}

	while (stop == false)
	{
		cout << "Enter the term you want to find " << endl;
		cin >> findTerm;
		cout<< dict.findValue(findTerm) <<endl;
	}

	

		


	system("pause");
}