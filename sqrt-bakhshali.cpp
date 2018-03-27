#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
	while ( 1 ) {
	float s , x , a , b ;
	cout << endl << "Enter a number : ";
	cin >> s ;
	x=s/5;
	while ( abs(x*x-s) > 0.01 ) {
		cout << setprecision(4);
		a=(s-x*x)/(2*x);
		b=x+a;
		x=b-((a*a)/(2*b));
	}
	cout << endl << "The square root of the number = " << x << endl ;
	}
}
