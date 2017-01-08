// - My first C++ program, 12/4/2016
// - cout a message

#include <iostream>  // Preprocessor directive using 'iostream' file
                     // This tells the preprocessor to add the contents of the iostream file to the program
                     // before the next step in compliation
int main(void)  // Function header
                // In C++ empty () and (void) are identical
{
    using namespace std; // new C++ headers may use name spaces to explicitly define what's in use
                         // This is the lazy examlpe that makes all of std available
    // Individual names can be made available as well
    using std::cout;
    using std::endl;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You will not regret it!" << endl;
    return 0; // Only in the main function will there be an implicity 'return 0;'
              // if all statements are hit without hitting a return statement
}                           
