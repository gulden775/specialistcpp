#include <iostream>

class Test {

	public:
int  getX(void){     // void указывает ч=то нет пргументов, для безопасности	return x;
return x;
}
void setX(int x){

	if(x < 0) x = -x;	
     			
	         //локальня переменная имеет приоретет
    this->x=x;  //this автоматически определяемый указатель на обьект кл                    асса вызвошего данный метод 
}


	private:

		int x;
};

int main(int argc, char** argv){

	Test t1;
	t1.setX(-101);
	std::cout << t1.getX() << std::endl;
	
	Test *t2 = new Test();
	t2->setX(202);
	std::cout << t2->getX() << std::endl;
	delete t2;

	return 0;
}
