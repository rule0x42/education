// Playing with overflow and underflow integers (short)
#include <iostream>
#include <climits>
const char ZERO = 0;

int main(void)
{
    using namespace std;
    short signed_short = SHRT_MAX;
    unsigned short unsigned_short = signed_short;

    cout << "signed_short = " << signed_short << endl;
    cout << "unsigned_short = " << unsigned_short << endl << endl;

    // Adding to a max signed integer results in rolling over to the min
    //  32768 + 1 = MIN
    cout << "signed_short + 1" << endl;
    signed_short = signed_short + 1;
    cout << "signed_short = " << signed_short << endl;

    cout << "unsigned_short + 1" << endl;
    unsigned_short = unsigned_short + 1;
    cout << "unsigned_short = " << unsigned_short << endl << endl;

    signed_short = ZERO;
    unsigned_short = ZERO;

    cout << "signed_short = " << signed_short << endl;
    cout << "unsigned_short = " << unsigned_short << endl << endl;

    cout << "signed_short - 1" << endl;
    signed_short = signed_short - 1;
    cout << "signed_short = " << signed_short << endl;

    // Subtracting from a min unsinged integer results in rolling over to the max
    //  0 - 1 = MAX
    cout << "unsigned_short - 1" << endl;
    unsigned_short = unsigned_short - 1;
    cout << "unsigned_short = " << unsigned_short << endl;
}
