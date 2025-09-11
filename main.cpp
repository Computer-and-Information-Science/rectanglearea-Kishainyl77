#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;

const double area = length * width;
const double perimeter = 2 * (length + width);

cout << "Rectangle Properties:\n";
cout << "Length = " << length << endl;
cout << "Width = " << width << endl;
cout << "Area = " << area << endl;
cout << "Perimeter = " << perimeter << endl;

return 0;
}