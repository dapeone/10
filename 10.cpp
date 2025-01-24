#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double a, b, c, p, S;
  cout << "input A   ";
  cin >> a;
  cout << "input B   ";
  cin >> b;
  cout << "input C   ";
  cin >> c;
  
  if (a <= 0 or b <= 0 or c <= 0) {
    cout << "error";
    return 0;
  }
  if (a + b <= c or a + c <= b or b + c <= a) {
    cout << "No";
  }
  
  else {
    cout << "Yes";
    p = (a + b + c) / 2;
    S = sqrt (p * (p - a) * (p - b) * (p - c));
    cout << endl << "S = " << S;
  }

}