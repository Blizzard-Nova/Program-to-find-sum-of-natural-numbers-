#include <iostream>
using namespace std;
int Natural_Sum(int x)
{
	if (x > 1)
		return x + Natural_Sum(x - 1);

	else return 1;
}
int main()
{
	int x;
	cout << "Enter a natural number \n";
	cin >> x;
	cout << "Sum of all the natural numbers till  " << x << "  is" << " " << Natural_Sum(x) << endl;

	return 0;
}