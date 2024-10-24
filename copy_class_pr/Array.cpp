#include "Array.h"



void Array::input_nums() 
{
	char buffer[101];
	cout << "input array: ";
	cin.getline(buffer, 101);
	cout << "input size: "; cin >> size;
	cin.ignore();

	istringstream iss(buffer);
	 
	arr = new int[size+1];
	for (int i = 0; i < size; i++) {
		if (!(iss >> arr[i])) {
			cout << "eror\n";
			exit(NULL);
			break;
		}
	}
}

void Array::display() {

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	
}

void Array::change_size() {

	cout << "your present array: ";
	display();
	delete[] arr;
	cout << "\nthink about your new array\n";
	input_nums();
}

void Array::sort_arr() {
	sort(arr, arr + size);
}

double Array::max() {
	sort_arr();
	return arr[size - 1];
}

double Array::min() {
	sort_arr();
	return arr[0];
}