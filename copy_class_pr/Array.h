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
	Array(int size_f) : size{ size_f }, arr{ size_f ? new int[size_f + 1] : nullptr } 
	{
		for (int i = 0; i < size; i++) {
			arr[i] = i + 1 ;
		}
	}
	Array() :Array{ 0 } {}

	~Array() { delete[] arr; }

	Array(const Array& obj) : size{ obj.size }, arr{ obj.size ? new int[obj.size + 1] : nullptr } {}

	void input_nums();
	void display();
	void change_size();
	void sort_arr();
	double max();
	double min();
	
	operator int() const {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += arr[i] ;
		}
		return sum;
	}

	explicit operator char* () const{
		int str_size = size * 6 + 1;
		char* str = new char[str_size];
		for (int i = 0; i < size; i++) {
			str[i] = arr[i];
		}
	}

	int& operator[](int index) {
		if (index > size) {
			cout << "eror\n";
		}
		return arr[index];
	}

	Array& operator() (int num) {
		for (int i = 0; i < size; i++) {
			arr[i] += num;
		}
		return *this;
	}

	Array(Array&& obj) {
		size = obj.size;
		arr = obj.arr;
		obj.size = 0;
		obj.arr = nullptr;
	}

};

