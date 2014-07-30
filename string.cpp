#include <iostream>
#include <string>
using namespace std;

int main () {

string hw = "hworld";

string one,two;
cin >> one;
cout << one << endl;
cin >> two;
cout << two << endl;

string withspace = "hello world";
cout << "str with spaces: " << withspace << endl;

//string concat = "hello" + "w"; //wrong

char ch = 'x';
//string wrong = 'a' + ch; or 'a' + 't' is also invalid

string ccat = hw + " one" + " two"; //right

//string ccatWrong =  " one" + " two" + hw; //because of left assoc of concat (+) operator

string nullstr;
string trick = nullstr + "literal1 +" + " literal2 +" + " .... +" + " literaln";
cout <<"Tricked concat operator: " << trick <<endl;
 
cout << ccat << endl;
cin >> hw;
cout << hw << " hw.size() [is the strlen() of c++] :" << hw.size() <<  endl;

return 0;
}

