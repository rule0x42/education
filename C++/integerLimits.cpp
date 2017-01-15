// limits.cpp -- check system integer limits
#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    unsigned int n_int = UINT_MAX;
    unsigned short n_short = USHRT_MAX;
    unsigned long n_long = ULONG_MAX;
    unsigned long long n_llong = ULLONG_MAX;

    // sizeof operator yields size of type or of vairable
    cout << "Size of integer types:" << endl;
    cout << "---------------------" << endl;
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof (long) << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum unsinged values:" << endl;
    cout << "------------------------" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;
    cout << endl;

    cout << "Maximum signed int value = " << INT_MAX << endl;
    cout << "Minimum signed int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
}
