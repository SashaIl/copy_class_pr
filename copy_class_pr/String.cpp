#include "String.h"
#include <string>


int String::count = 0;


void String::set_str(char* str_f) {
	strcpy_s(str, strlen(str_f) + 1, str_f);
}

char* String::get_str() { return str; }

void String::PrintStr() {
	cout << str << endl;
}