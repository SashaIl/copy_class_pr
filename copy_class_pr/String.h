#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class String
{
	char* str;
	static int count;
public:
	void PrintStr();
	String(char* str_f) : str{ str_f } {
		if (str_f) {
			strcpy_s(str, strlen(str_f) + 1, str_f);
			PrintStr();
		}
	}
	String() :String{ nullptr } {}

	String(const String& obj) : str{ obj.str ? new char[strlen(obj.str) + 1] : nullptr } {}


	void set_str(char*);
	char* get_str();

	static int get_count() { return count; }
	~String() { delete[] str; }
};

