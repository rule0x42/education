#include <iostream>
using namespace std;
void age(int);

int main()
{
    int n;
    cout << "Hello, what is your age? ";
    cin >> n;
    age(n);
    return 0;
}

void age(int n)
{
    cout << "You were born " << n << " year(s) ago..." << endl;
}
