/**
This code gets and displays 
current epoch time in milliseconds
**/


#include <chrono>
#include <iostream>

int main() {
    int64_t now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    std::cout << now << std::endl;
    return 0;
}
