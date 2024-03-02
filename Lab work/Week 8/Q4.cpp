#include <iostream>
#include <string>

using namespace std;

int main() {
  string sentence, word;
  int count = 0;

  cout << "Enter a line of text: ";
  getline(cin, sentence);

  cout << "Enter the word to count: ";
  cin >> word;

  // Count the number of occurrences of the word in the sentence.
  for (size_t pos = 0; (pos = sentence.find(word, pos)) != string::npos; pos += word.length()) {
    count++;
  }

  cout << "The word '" << word << "' occurs " << count << " times in the sentence." << endl;

  return 0;
}

