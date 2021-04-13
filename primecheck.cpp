//Check if a number is prime
#include <iostream>
using namespace std;
int main(){
  int n, i;
  bool isPrime = true;

  cout << "Enter a positive integer: \n";
  cin >> n;

  for(i = 2; i <= n / 2; ++i){
      if(n % i == 0){
          isPrime = false;
          break;
      }
  }
  cout << "You have entered: "<<n<<"\n";
  if (isPrime)
      cout << n <<" is a prime number";
  else
      cout << n << " is not a prime number";
  return 0;
}
