#include <cassert>
#include "source_code.h"

using namespace std;

int main()
{
  cout << "Starting tests..." << endl;
  assert(addNumbers(1, 2) == 3);
  assert(addNumbers(2, 5) == 7);
  assert(addNumbers(0, 0) == 0);
  assert(addNumbers(-1, -2) == -3);
  assert(addNumbers(100, 200) == 300);
  cout << "The tests have finished successfully!" << endl;

  return 0;
}
