#include<iostream>
using namespace std;

class Counter {
    private:
        static int count; // Static member variable

    public:
        // Constructor
        Counter() {
            count++;
            cout << "Object created. Total objects: " << count << endl;
        }

        // Destructor
        ~Counter() {
            count--;
            cout << "Object destroyed. Total objects: " << count << endl;
        }
};

// Initialize static member variable
int Counter::count = 0;

int main() {
    // Create objects in different blocks
    {
        Counter c1;
        {
            Counter c2;
            Counter c3;
        }
        Counter c4;
    }
    return 0;
}

