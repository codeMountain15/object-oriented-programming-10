// stream05.cpp
// overloading stream operators

#include <iostream>
using namespace std;

class Complex_number
{
private:
	int real, imaginary;

public:
	Complex_number(int input1 = 0, int input2 = 0)
	{
		real = input1; imaginary = input2;
	}
	friend ostream& operator << (ostream& out_stream, const Complex_number& c);
	friend istream& operator >> (istream& in_stream, Complex_number& c);
};

ostream& operator << (ostream& out_stream, const Complex_number& obj)
{
	out_stream << obj.real << "+";
	out_stream << obj.imaginary << "i" << endl;
	return out_stream;
}

istream& operator >> (istream& in_stream, Complex_number& obj)
{
	cout << "Enter the real part of the number:\n";
	in_stream >> obj.real;
	cout << "Enter the imaginary part of the number:\n";
	in_stream >> obj.imaginary;
	return in_stream;
}

int main()
{
	Complex_number c1;
	cin >> c1;
	cout << "The complex number is ";
	cout << c1;

	return 0;
}
