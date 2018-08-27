/*
Author: N.J. Cagomoc
Program: Quadraric Formula
Descriprion: This program determines the first and the second root of a quadraric equation. 
*/

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int a,b,c;
int d;
int x1;
int x2;

  //prompt the user to enter inputs
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;
	cout << "Enter value of c: ";
	cin >> c;
	
	d = sqrt((b*b)-(4*a*c));
	x1 = (-b+d) / 2*a;
	x2 = (-b-d) / 2*a;
	
	// output of the program
	cout << "The first root is: " << x1 << endl;
  cout << "The second root is: " << x2 << endl;  

    return 0;
}
