#include <iostream>
#include <cstring>

void Log(const char* message) {
    std::cout << message << std::endl;
}

int main() {
    Log("Hello World");

    //POINTERS
    int var = 8;
    int* ptr = &var; //Gets the value at that memory address, the memory address of var
    *ptr = 10; //Sets the memory address to int ten (int bacause we declared ptr as an int size)
    std::cout << var << std::endl;

    char* buffer = new char[8]; //Im asking the computer to alocate eight bytes of memory for this pointer (char is one, rt?)
    memset(buffer, 0, 8); //This function takes the pointer as a parameter, what are we filling the memory with as the second, and how much as the third, and sets the memory address with that info
    
    char** ptr = &buffer;
    
    delete[] buffer; 

    //REFERENCES
    int a = 5;
    int& ref = a; //This only exists only in our source code; if we compile it, there wont be a ref, only a
    ref = 2; //This sets a to 2 haha

    //void Increment(int& value) {
    //    value++
    //} This function takes a reference and increments the value passed by it whoaaa

    std::cin.get();
}