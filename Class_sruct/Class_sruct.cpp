#include <iostream>

class Test {     //���� ����� ��� � struct Test{ public: int x;}
public:
	int x;
};

int main(int argc, char** argv)
{
	Test t1;
	t1.x = 5;
	std:: cout << t1.x << std::endl;

	Test* t2 = new Test();
	t2->x = 202;
	std::cout << t2->x << std::endl;
	delete t2;
	return 0;
}


/*  � ����� ��������� ������ ������� 1)��������� �� ����� ���� ������
* ������ ������� ���� void
* ������ ������� ������� (��������� �� ������� ����� ��� � ���� ���������)
* 

 
*  ��� �� �������� ���������� ������ circle c1; c1.DrawCircle();
   ���� ��������� Circle *ptr = new Circle(); ptr->DrawCircle();  ��������� ������ ����� ���������
   ����� ��� ������� delete ptr;
   
   
* 
*/