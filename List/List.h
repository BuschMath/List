#ifndef LIST_H
#define LIST_H

const int MAX_SIZE_LIST = 100;
typedef int Type;

class List
{
public:
	// Constructor
	List();

	List(int listSize);

	// Destructor
	~List();

	bool IsEmpty();

	int Length();

	// Return type bool to communicate success
	bool Insert(Type item);
	
	bool Delete(Type item);

	bool FindItem(Type item);

	void EmptyList();

	bool IsFull();

	Type GetNext();

	void ResetList();

private:
	Type* items;
	int sizeOfList;
	int pos;
};

#endif // !LIST_H
