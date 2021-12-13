#include <iostream>
#include <string>
using namespace std;

class IntDemo {
public:

	IntDemo(int x = 0) : x(x) {}
	operator string() {
		cout << "operator called!" << endl;
		return to_string(x);
	}

private:
	int x;
};

int main(int argc, char** argv) {
	IntDemo demo(101);
	string str = static_cast<string>(demo);

	cout << str << endl;

	return 0;
}
