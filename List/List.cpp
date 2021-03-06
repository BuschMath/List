#include "List.h"

List::List()
{
	sizeOfList = 0;
	pos = -1;

	items = new Type[MAX_SIZE_LIST];
}

List::List(int listSize)
{
	sizeOfList = 0;
	pos = -1;

	items = new Type[listSize];
}

List::~List()
{
	EmptyList();
}

bool List::IsEmpty()
{
	if (sizeOfList == 0)
		return true;
	else
		return false;
}

int List::Length()
{
	return sizeOfList;
}

bool List::Insert(Type item)
{
	if (IsFull() == false)
	{
		if (IsEmpty() == true)
			items[0] = item;
			
		else
		{
			for (int i = 0; i < sizeOfList; i++)
			{
				if (items[i] > item)
				{
					for (int j = sizeOfList; i < j; j--)
						items[j] = items[j - 1];

					items[i] = item;
					i = sizeOfList;
				}
				else if (i + 1 == sizeOfList)
				{
					items[sizeOfList] = item;
				}
			}
		}

		sizeOfList++;
		return true;
	}
	else
	{
		return false;
	}
}

bool List::Delete(Type item)
{
	if (IsEmpty() == false)
	{
		if (sizeOfList == 1 && items[0] == item)
		{
			EmptyList();
			return true;
		}
		for (int i = 0; i < sizeOfList; i++)
		{
			if (items[i] == item)
			{
				for (int j = i; j < sizeOfList - 1; j++)
				{
					items[j] = items[j + 1];
				}
				sizeOfList--;
				pos--;
				return true;
			}
		}
	}

	return false;
}

bool List::FindItem(Type item)
{
	for (int i = 0; i < sizeOfList; i++)
	{
		if (items[i] == item)
			return true;
	}
	return false;
}

void List::EmptyList()
{
	sizeOfList = 0;
	ResetList();
}

bool List::IsFull()
{
	if (sizeOfList == 100)
		return true;
	return false;
}

Type List::GetNext()
{
	if (pos < sizeOfList - 1)
		pos++;

	return items[pos];
}

void List::ResetList()
{
	pos = -1;
}
