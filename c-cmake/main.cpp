#include <iostream>
#include <ostream>
#include <windows.h>
using namespace std;

class Maker {
    private:

    int counter;

    public:
    void Maker{int param} {
        this->counter = param;
    }
};

void run(int param) {
    float ty = 12.77f;
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