#include <iostream>
#include "String.h"
#include "Array.h"

int main()
{
	//ex1
	//char* str{ new char[12] {"Hello world"} };
	//String s(str);

	Array arr(10);

	arr.display();
	cout << "index 9 = " << arr[9] << "\n";
	int size = arr;
	cout << "sum of array = " << size << "\n";
	cout << "\n\tadded 5:\n";
	arr(5);
	arr.display();


	String a1{(char*)"Hello world!"},
		a2 = move(a1);
}
