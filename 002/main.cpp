#include <iostream>
#include "cir.h"
using namespace std;

int main()
{
  cir cir1;
  cir cir2(1.5);
  cir cir3(5.0);
  cir cir4(7.5);

  cout << "The area of the circle of radius "
    << cir1.r << " is " << cir1.get() << endl;
  cout << "The area of the circle of radius "
    << cir2.r << " is " << cir2.get() << endl;
    cout << "The area of the circle of radius "
    << cir3.r << " is " << cir3.get() << endl;
  cout << "The area of the circle of radius "
    << cir4.r << " is " << cir4.get() << endl;

  // Modify circle radius
  cir2.r = 100;
  cout << "The area of the circle of radius "
    << cir2.r << " is " << cir2.get() << endl;

  return 0;
}
