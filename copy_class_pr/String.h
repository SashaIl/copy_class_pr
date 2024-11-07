#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class String
{
	char* str;
	static int count;
public:

	String(char* str_f) : str{ str_f ? new char[strlen(str_f)+1]:nullptr} {
		if (str_f) {
			strcpy_s(str, strlen(str_f) + 1, str_f);
			PrintStr();
		}
	}
	String() :String{ nullptr } {}

	String(const String& obj) : str{ obj.str ? new char[strlen(obj.str) + 1] : nullptr } {}


	void PrintStr();
	void set_str(char*);
	char* get_str();

	static int get_count() { return count; }
	~String() { delete[] str; }

	String(String&& obj) {
		str = obj.str;
		count = obj.count;
		
		obj.str = nullptr;
		obj.count = 0;
	}

	char operator[](int index) {
		return str[index];
	}

	int operator()(char symbol) {
		for (int i = 0; i < strlen(str); i++) {
			char arr[2];
			if (str[i] == symbol) {
				return i;
			}
		}
		return -1;
	}
};

