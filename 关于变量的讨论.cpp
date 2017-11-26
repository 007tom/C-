#include <iostream>
#include <complex>
using namespace std;
int main()
{
	// No initialization
	int num;
	cout << num << endl;
	
	// Different data type
	int a = 2;
	float b = 2;
	cout << "a = " << a << endl;
	cout << "a / 4 = " << a / 4 << endl;
	cout << "b / 4 = " << b / 4 << endl;
	
	// Data type calculation
	string str1 = "Tsinghua University, ";
	string str2 = "Department of Computer";
	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str1 + str2 = "  << str1 + str2 << endl;
	
	complex <int> c1(3, 4), c2(4, 5);
	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	cout << "c1 + c2 = " << c1 + c2 << endl;
	cout << "c1 * c2 = " << c1 * c2 << endl;
	
	// Memory address 
	int n;
	float f;
	double d = 1.23;
	char c = '*';
	cout << "address of n: " << &n << endl;
	cout << "address of f: " << &f << endl;
	cout << "address of d: " << &d << endl;
	cout << "address of c: " << &c << endl;
	
	return 0;
}
