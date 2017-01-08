// Playing with pointers and referrences

#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    int *p, num;

    cout << "Assign an int to num: ";
    cin >> num;
    cout << "\nThe referenced memory location &num ("
         << &num
         << ") contains the assinged value "
         << num
         << "."
         << endl;
    p = &num;
    cout << "\np = &num\n";
    cout << "p has been assigned the referrenced memory address of num (&num)\n";
    cout << "----------------------------------------------------------------\n";
    cout << "The pointer assinged to p has the memory address: " << p << endl;
    cout << "The de-referrenced pointer assinged to p (*p) contains:       " << *p << endl;
    num = 11;
    cout << "\nnum = 11\n";
    cout << "num has been assigned the new int value 11\n";
    cout << "----------------------------------------------------------------\n";
    cout << "The pointer assinged to p has the memory address: " << p << endl;    
    cout << "The de-referrenced pointer assinged to p (*p) contains:       " << *p << endl;
    *p = 2;
    cout << "\n*p = 2\n";
    cout << "The de-referrenced p has been assigned the int 2" << endl;
    cout << "----------------------------------------------------------------\n";
    cout << "The contents of num:                                           " << num << endl;
    cout << "The referrenced memory address of num (&num):     " << &num << endl;
    return 0;
}
