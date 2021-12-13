#include <iostream>

class Test {
public:
    Test(void) : Test(0) {  // �������� ���������� ������� ������������ ������ � 2011�. 
    }
    Test(int x) : x(x) { //������������ �, ������ ����������
        //this->x = x;
    }

    int getX(void) const { return x; }
    const Test operator+(const Test& rv) const {
        return *(new Test(x + rv.x));
    }
    const Test operator = (const Test& rv) {
        x = rv.x;
        return *this;
    }
 
private:
    int x;
};

template <typename T>
T sum(T a, T b) {

	return a + b;
}

using namespace std;
int main(int argc, char** argv) {

	cout << sum(1, 2) << endl; //complete int
	cout << sum(2.5, 7.4) << endl;//complete double
	cout << sum(3, 5) << endl;//int
	cout << sum('1', '1') << endl; //char ������� �� ��� �����
	//cout << sum("hello", "world") << endl;// �� ������������� �� �������� � �++ ������� ��� ��� �� ����������
	cout << sum<string>("hello", "world") << endl;

    Test t1(1), t2(2);
    cout << sum(t1, t2).getX() << endl; //test tip dannix
    
    cout << sum<double>(1, 2.5) << endl;//double
	
	return 0;

}