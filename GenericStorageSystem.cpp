#include <iostream>
using namespace std;

// Class template
template <typename T>
class Storage {
private:
    T value;

public:
    // Constructor
    Storage(T v) {
        value = v;
    }

    // Display function
    void display() {
        cout << "Stored value: " << value << endl;
    }
};

int main() {
    // Store an integer
    Storage<int> intStorage(100);
    intStorage.display();

    // Store a float
    Storage<float> floatStorage(45.67f);
    floatStorage.display();

    // Store a string
    Storage<string> stringStorage("Hello, templates!");
    stringStorage.display();

    return 0;
}
