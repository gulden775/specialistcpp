

#include <iostream>
using namespace std;
void reverse(int*, int);
int main(int argc, char** argv)
{
	int n;
	cout << " intput n: ";
	cin >> n;

	int* m = new int[n];
	cout << "input array" << endl;
	for (int i = 0; i < n; i++) cin >> m[i];

	reverse(m, n);

	cout << " reverse array: ";
	for (int i = 0; i < n; i++) cout << m[i] << " ";

	delete[]m;
	return 0;


}
void reverse(int *m, int n){
	int tmp;
	for (int i = 0; i < n/2; i++)
	{
		tmp = m[i];
		m[i] = m[n - i - 1];
		m[n - 1 - i] = tmp;
	}

	}