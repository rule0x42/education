// Convert yards to meters

#include <iostream> // preprocessor directive
#define METERS_PER_YARD 0.9144 // symbolic constant

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;
    int yards;
    double result;
    cout << "What is the distance in yards that you wish to convert to meters? ";
    cin >> yards;
    result = METERS_PER_YARD * yards;
    cout << yards
         << " yards is equal to "
         << result
         << " meters."
         << endl;
    return 0;
}
