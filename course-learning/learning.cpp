#include <iostream>
#include <cstring>
#include <array>
#include <string>

//void Log(const char* message) {
//    std::cout << message << std::endl;
//}

class Log {
    public:

        enum Level {
            LevelError = 0, LevelWarning, LevelInfo
        };

    private: 
        Level m_LogLevel = LevelInfo; //m underscore is a convention for a class member variable, aka private
    public:
        void SetLevel(Level level) {
            m_LogLevel = level;
        }

        void Error(const char* message) {
            if (m_LogLevel >= LevelError)
                std::cout << "[ERROR]:" << message << std::endl;
        }

        void Warn(const char* message) {
            if (m_LogLevel >= LevelWarning)
                std::cout << "[WARNING]:" << message << std::endl;
        }

        void Info(const char* message) {
            if (m_LogLevel >= LevelInfo)
                std::cout << "[INFO]:" << message << std::endl;
        }
};

int main() {
    //Log("Hello World");

    //POINTERS
    int var = 8;
    int* ptr = &var; //Gets the value at that memory address, the memory address of var
    *ptr = 10; //Sets the memory address to int ten (int bacause we declared ptr as an int size)
    std::cout << var << std::endl;

    char* buffer = new char[8]; //Im asking the computer to alocate eight bytes of memory for this pointer (char is one, rt?)
    memset(buffer, 0, 8); //This function takes the pointer as a parameter, what are we filling the memory with as the second, and how much as the third, and sets the memory address with that info
    
    char** ptr2 = &buffer;
    
    delete[] buffer; 

    //REFERENCES
    int a = 5;
    int& ref = a; //This only exists only in our source code; if we compile it, there wont be a ref, only a
    ref = 2; //This sets a to 2 haha

    //void Increment(int& value) {
    //    value++
    //} This function takes a reference and increments the value passed by it whoaaa

    //Array size:
    int a[5]; //first way to do it, by stack, will be deleted when the code ends, raw array
    int count = sizeof(a) / sizeof(int); // that is to find the size of the array that is 5

    int* example = new int[5]; // Second way to do it, by pointer, heap array, also raw
    delete[] example;
    //Avoid using this cause it makes another memory address to look into, and not optimized, however, we need this form to pass it to a function,
    //or to return the array, cause the stack form might mess everything up (endpointer error). Also needs to be destroyed manualy.
    //For this, there is no way to find out the size hm

    //right way to do it:
    static const int example1Size = 5;
    int example1[example1Size];

    //If we #include the array library, we can do:
    std::array<int, 5> another;
    int size = another.size(); //Then we have this function USE THIS!!
    //Standard array from library

    //STRINGS:
    std::string name = "Cherno"; //just this with the library
    name += " hello";
    name.size();
    std::cout << name << std::endl;
    
    

    //Log class usage:
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

    std::cin.get();
}

