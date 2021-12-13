#include <iostream>

class Test {

public:

	Test() {                          //конструктор для счетчика
		id = count++;
	
	}
	int getID(void) { return id; }
	static int getCount(void) { return count; } // так как мы можем обратится к статической переменной без создания обьекта

private:
	int x;
	int id;
	static int count;
};
int Test::count;   // сттические переменные хранятся в глобальной переменной и может вызыватся только статическими методами

using namespace std;

int main(int argc, char** argv){

	cout << Test::getCount() << endl;  // metod getCount привязан к классу поэтому двоеточие

	Test t1, t2;
	cout << t2.getID() << endl;

	return 0;
}