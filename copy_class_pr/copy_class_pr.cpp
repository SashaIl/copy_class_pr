#include <iostream>
#include "String.h"
#include "Array.h"

int main()
{
	//ex1
	//char* str{ new char[12] {"Hello world"} };
	//String s(str);

	//Array a;

	//a.input_nums();
	//a.change_size();
	//a.sort_arr();
	//a.display();
	//cout << "max" << a.min() << endl;
	//cout << "min" << a.max() << endl;

	String s1{(char*)"Hello world!"},
		s2 = move(s1);

	Array a1(5),
		a2 = move(a1);
	a1.display();
	a2.display();

}
