#include <cmath>
#include <iostream>

using namespace std;


int main() {
     double x, y, z, S;

   // �������� �������� x, y �� z �� �����������
   cout << "������ �������� x: ";
   cin >> x;
   cout << "������ �������� y: ";
   cin >> y;
   cout << "������ �������� z: ";
   cin >> z;

   // ���������� S
   S = sqrt 1/2(|2z - x^2| / sin (x))^3;

   // �������� �������� S �� �����
   cout << "S = " << S << endl;

   return 0;
}

