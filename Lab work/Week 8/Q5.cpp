#include <iostream>
#include <string>

using namespace std;

int find_substring(string S, string T) {
  int pos = S.find(T);
  if (pos == string::npos) {
    return 1;
  } else {
    return pos + 1;
  }
}

int main() {
  string S = "This is a sentence.";
  string T = "sentence";

  int pos = find_substring(S, T);

  if (pos == 1) {
    cout << "The string T does not exist in the string S." << endl;
  } else {
    cout << "The string T begins at index " << pos << " in the string S." << endl;
  }

  return 0;
}

