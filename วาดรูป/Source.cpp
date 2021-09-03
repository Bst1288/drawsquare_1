#include <iostream>
using namespace std;

int main() {
	int num,b;
	cout << "Enter number : ";
	cin >> num;

						
	for (int a = 1; a <= num ; a++){
		for (int b = 1; b <= num; b++)
		{
			if (a == 1 || a == num || b == 1 || b == num)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;

	}
	return 0;
}