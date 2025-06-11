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

    std::cin.get();
}