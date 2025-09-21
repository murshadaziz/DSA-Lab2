#include<iostream>
using namespace std;

void analyze_pointer(int* ptr) {
	cout << "Memory Address: " << ptr;
	cout << "\nValue Stored: " << *ptr;
	cout << "\n\n\n";
}

int main() {
	int a;
	a = 5;
	int* b = &a;

	analyze_pointer(b);

	int* c = new int (6);

	analyze_pointer(c);
}