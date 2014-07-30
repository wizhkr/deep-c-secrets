#include <iostream>

using namespace std;

int main () {

int x;
cout << "Enter dyn array size:" ;
cin >> x;
const int N = x;
int a[N] ; // cannot be initialized, because at the compile time the initalization which is performed does not know the size of the array.

cout << "Done." << endl;

}
 
