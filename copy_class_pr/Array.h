#pragma once
#include <iostream>
#include <sstream>
#include <algorithm>
//#include <cstring>
using namespace std;
class Array
{
	int size;
	int* arr;

public:
	Array(int size_f, char* arr_f) : size{ size }, arr{ size ? new int[size + 1] : nullptr } {}
	Array() :Array{ 0 ,nullptr } {}

	~Array() { delete[] arr; }

	Array(const Array& obj) : size{ obj.size }, arr{ obj.size ? new int[obj.size + 1] : nullptr } {}

	void input_nums();
	void display();
	void change_size();
	void sort_arr();
	
	double max();
	double min();
	
};

