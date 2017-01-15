#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    char ch = 'J';
    int i = ch;
    cout << "ch: " << ch << ", i: " << i << endl;
    ch = ch + 1;
    i = ch;
    cout << "ch: " << ch << ", i: " << i << endl;

    // Prints the ASCII code for the character #
    cout << '#';
    // Prints the character
    cout.put('#');

    char alarm = '\a';
    cout << alarm;
}
