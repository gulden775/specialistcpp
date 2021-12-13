#include <iostream>

class Test {

public:

	Test() {                          //����������� ��� ��������
		id = count++;
	
	}
	int getID(void) { return id; }
	static int getCount(void) { return count; } // ��� ��� �� ����� ��������� � ����������� ���������� ��� �������� �������

private:
	int x;
	int id;
	static int count;
};
int Test::count;   // ���������� ���������� �������� � ���������� ���������� � ����� ��������� ������ ������������ ��������

using namespace std;

int main(int argc, char** argv){

	cout << Test::getCount() << endl;  // metod getCount �������� � ������ ������� ���������

	Test t1, t2;
	cout << t2.getID() << endl;

	return 0;
}