# include <iostream>

using namespace std;

unsigned long factfunc(unsigned long);

int main()
{
	unsigned long fact;
	int n;
	cout << "Please! Enter number: ";
	cin >> n;
	fact = factfunc(n);
	cout << "Factorial number: " << n << "equally" << fact << endl;
	system("pause");
	return 0;
}

unsigned long factfunc(unsigned long n)
{
	if (n > 1)
		return n * factfunc(n - 1);
	else
		return 1;
}