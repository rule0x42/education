#include <iostream>
using namespace std; // all functions can use std namespace
void age(int);

int main()
{
    using namespace std; // available to local function
    int n;
    cout << "Hello, what is your age? ";
    cin >> n;
    age(n);
    return 0;
}

void age(int n)
{
    cout << "You were born "
         << n 
         << " year(s) ago." 
         << std::endl; // namespace std without using directive
}
