#include <iostream>
using namespace std;

int binToDec(int binNum)
{
  int ans = 0, pow = 1;
  while (binNum > 0)
  {
    int rem = binNum % 10; 
    ans += rem * pow; 
    pow = pow * 2; 
    binNum /= 10; 
  }
  return ans;
}
int main()
{
  cout << "The decmal number is " << binToDec(1010);
  return 0;
}