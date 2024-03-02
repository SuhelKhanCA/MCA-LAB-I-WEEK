#include <iostream>
using namespace std;
int main()
{

    char str1[50], char str2[50];

    str1 = "level";

    for (int i = 0; i < str1.length; i++)
    {

        str2[i] = str1[str1.length - i];
    }

    if (strcmp(str1, str2) == 0)
    {
        cout << "String is palindrome ";
    }
    else
    {
        cout << " String is not palindrome";
    }

    return 0;
}