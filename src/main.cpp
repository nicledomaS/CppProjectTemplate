#include <iostream>

using namespace std;

int main()
{
  cout << "Hello World!" << endl;

  auto test = new int[5];
  delete[] test;

  return 0;
}
