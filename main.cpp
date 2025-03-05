#include <iostream>
#include "source_code.h"

using namespace std;

int main()
{
  int x;
  int y;

  cout << "Let's add some numbers!" << endl;

  cout << "Enter your first number: ";
  cin >> x;

  cout << "Enter your second number: ";
  cin >> y;

  cout << "The sum is " << addNumbers(x, y) << "." << endl;
  cout << "Thanks for using my program!" << endl;

  return 0;
}
