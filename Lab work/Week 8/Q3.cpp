#include <iostream>
#include <string>

using namespace std;

int main() {
  string sentence = "This is a sentence with the word 'the' in it.";
  string find_string = "the";
  string replace_string = "that";

  // Find and replace the string in the sentence.
  cout << sentence.replace(sentence.find(find_string), find_string.length(), replace_string) << endl;

  return 0;
}

