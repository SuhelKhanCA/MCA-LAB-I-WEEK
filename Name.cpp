#include <iostream>
using namespace std;

class Naam {
public:
    static void main() {
        string name = "Suhel";
        greet(name);
        cout << name << std::endl;
        //cout << nn << std::endl;
    }

    static string greet(string nam) {
        nam = "Khan";
        return nam;
    }
};

int main() {
    Naam::main();
    return 0;
}

