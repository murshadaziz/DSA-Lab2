#include<iostream>
using namespace std;


void string_reverse(char* ptr, int size) {
    for (int i = 0; i < size / 2; i++) {
        char temp = ptr[i];
        ptr[i] = ptr[size - i - 1];
        ptr[size - i - 1] = temp;
    }
}

int main() {
    int size;
    cout << "Enter size of string: ";
    cin >> size;

    cin.ignore();

    char* str = new char[size + 1]; 

    cout << "Enter a string: ";
    cin.getline(str, size + 1);

    int len = strlen(str);

    string_reverse(str, len);

    cout << "\nReversed String: " << str;

    cout << "\n\n\n";
    delete[] str; 
    return 0;
}
