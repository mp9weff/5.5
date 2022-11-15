#include <iostream>
#include <cmath>         
using namespace std;

int Vsum(int a, int b,int c,int m) 
{
	int V, V1, V2;
	V1 = rand();
	V2 = rand();
	V = (a * V1 + b * V2 + c) % m;
	cout << "V1 =" << V1 << "\n";
	cout << "V2 =" << V2 << "\n";
	return V;
}
int main()
{
	int a, b, c, m,V;
	cout << "a ="; cin >> a;
	cout << "b ="; cin >> b;
	cout << "c ="; cin >> c;
	cout << "m ="; cin >> m;
	V = Vsum(a, b, c, m);
	cout << "V ="<< V;
	
	return 0;
}