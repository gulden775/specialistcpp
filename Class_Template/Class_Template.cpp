#include <iostream>


template <typename T>
class Storage {
public:
	Storage(T data) : data(data) {}
	T getData(void) const;// { return data; } // ��� �� ��� �������� ����� ����������� ����������� ����������� 
	void setData(T data) {
		this->data = data;
	}
	int compareTo(const Storage& rv) const {
		if (data > rv.data) return 1;
		if (data < rv.data) return -1;
		return 0;	
	}
private:
	T data;
};

template <typename T>						//��������� ������ ������� ������ � ����� ����� ������������������� ������ ������ ������ � ������ ������
 T Storage<T>::getData(void) const {

	return data;
}
int main(int argc, char** argv) {

 Storage <int>st1(10);
 Storage <int>st2(20);

 Storage <std::string>st3("aa");
 Storage < std:: string > st4("Ba");
 std::cout << st1.compareTo(st2) << std::endl;
 std::cout << st3.compareTo(st4) << std::endl;
	return 0;
}


// compareTo(const Storage &rv) const{ return data.compareTo(rv.data);} ����������� ����� ����������������
///����������� ������ ���������� ������������� ���� ������ ������ ������� ������������� ���� ������ ������ 1 � 0 ���� �����