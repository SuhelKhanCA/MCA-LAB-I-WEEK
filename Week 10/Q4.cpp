#include <iostream>
#include <cstring>
union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[10];
};

int main() {
    Address myAddress;

    // Store and print the home address
    strcpy(myAddress.home_address, "123 Main St");
    std::cout << "Home Address: " << myAddress.home_address << std::endl;

    // Now store and print the city
    strcpy(myAddress.city, "Springfield");
    std::cout << "City: " << myAddress.city << std::endl;

    // Now store and print the state
    strcpy(myAddress.state, "Illinois");
    std::cout << "State: " << myAddress.state << std::endl;

    // Now store and print the zip code
    strcpy(myAddress.zip, "62701");
    std::cout << "ZIP: " << myAddress.zip << std::endl;

    return 0;
}

