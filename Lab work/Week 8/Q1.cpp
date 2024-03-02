#include <iostream>
#include <string>

int main() {
  string main_string = "Hello, World!";
  string sub_string = "How are you?";
  int pos = 7;
  int n = 3;

  // Insert the substring into the main string.
  main_string.insert(pos, sub_string);

  // Delete the characters from the main string.
  main_string.erase(pos, n);

  // Print the final string.
  cout << main_string << endl;

  return 0;
}

