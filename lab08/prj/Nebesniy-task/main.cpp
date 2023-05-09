//task 8.2.1

// (c) Copyright 2023
// Nebesniy Ivan

#include <iostream>
#include <Windows.h>

using namespace std;

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

int main() {

   cout << "---Розробник програми----\n";
   cout << "-----Nebesniy Ivan, Небесний Іван-----\n";
   cout << "-----------©----------";

   return 0;
}

//task 8.2.2

#include <iostream>
#include <Windows.h>

using namespace std;

SetConsoleCP(1251);
SetConsoleOutputCP(1251);


bool result = (a + 3 <= b);

    if (result) {
    std::cout << "true";
    }else {
    std::cout << "false";

    return 0;
}

//task 8.2.3

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x = 123;
    int y = -456;
    int z = 0xABCD;

    cout << "x (decimal): " << x << endl;
    cout << "y (decimal): " << y << endl;
    cout << "z (decimal): " << z << endl;

    cout << "x (hexadecimal): 0x" << hex << x << endl;
    cout << "y (hexadecimal): 0x" << hex << y << endl;
    cout << "z (hexadecimal): 0x" << hex << z << endl;

    return 0;
}



