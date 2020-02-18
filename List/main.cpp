#include "List.h"

#include <iostream>

using namespace std;

int main()
{
	int input;
	cout << "Input size: ";
	cin >> input;

	List l(input);

	cout << "Is empty: " << l.IsEmpty() << endl;
	cout << "Is full: " << l.IsFull() << endl;

	l.Insert(42);
	l.Insert(37);
	l.Insert(69);
	l.Insert(-2057);
	l.Insert(4);

	cout << "Is empty: " << l.IsEmpty() << endl;
	cout << "Is full: " << l.IsFull() << endl;

	for (int  i = 0; i < l.Length(); i++)
	{
		cout << "Item: " << i << ": " << l.GetNext() << endl;
	}

	l.ResetList();
	for (int i = 0; i < l.Length() + 1; i++)
	{
		cout << "Item: " << i << ": " << l.GetNext() << endl;
	}

	l.Delete(42);
	l.Delete(4);
	l.Delete(69);
	l.Delete(13);

	l.ResetList();

	for (int i = 0; i < l.Length(); i++)
	{
		cout << "Item: " << i << ": " << l.GetNext() << endl;
	}

	cout << "Find 13: " << l.FindItem(13) << endl;
	cout << "Find -2057: " << l.FindItem(-2057) << endl;

	l.EmptyList();

	cout << "Is empty: " << l.IsEmpty() << endl;
	cout << "Is full: " << l.IsFull() << endl;
}