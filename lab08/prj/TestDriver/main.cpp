#include <cmath>
#include <iostream>

using namespace std;


int main() {
     double x, y, z, S;

   // отримуЇмо значенн€ x, y та z в≥д користувача
   cout << "¬вед≥ть значенн€ x: ";
   cin >> x;
   cout << "¬вед≥ть значенн€ y: ";
   cin >> y;
   cout << "¬вед≥ть значенн€ z: ";
   cin >> z;

   // обчислюЇмо S
   S = sqrt 1/2(|2z - x^2| / sin (x))^3;

   // виводимо значенн€ S на екран
   cout << "S = " << S << endl;

   return 0;
}

