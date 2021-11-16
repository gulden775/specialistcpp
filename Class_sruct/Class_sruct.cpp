#include <iostream>

class Test {     //тоже самое что и struct Test{ public: int x;}
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


/*  в нутри структуры нельзя хранить 1)стурктура не может быть пустой
* нельзя хранить типа void
* нельзя хранить функции (указатели на функцию можно как и сами указатели)
* 

 
*  что бы обьявить переменную класса circle c1; c1.DrawCircle();
   усли указатель Circle *ptr = new Circle(); ptr->DrawCircle();  завершить работу через указатель
   нужно его удалить delete ptr;
   
   
* 
*/