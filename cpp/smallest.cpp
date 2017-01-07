#include <iostream>

void cabbage(int);

int main()
{
    using namespace std;

    int n;

    cout << "Hello, what is your age? ";
    cin >> n;
    cabbage(n);

    return 0;
}

void cabbage(int n)
{
    using namespace std;

    cout << "You were born " << n << " year(s) ago..." << endl;
}
