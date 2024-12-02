#include <iostream>
#include <ostream>
#include <windows.h>
using namespace std;

void run(int param) {
    for (int i = 0; i < param; i++) {
        std::cout << i << std::endl;
        //Sleep(500);
    }
}

int main() {
    std::cout << "I want to get ready" << std::endl;
    std::cout << "hi" << std::endl;
    for (int i = 0; i < 5; i++) {
        //run(i);
    }
    int array[] = {10,20,40,50};
    for (int i : array) {
        cout << i << endl;
    }
    return 0;
}