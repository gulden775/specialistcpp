#include <iostream>

class Test {
public:
	
	Test(int x) : x(x) {}
	void setX(int x) {
		this->x = x;
	}
	int getX(void) const {
		return x;
	}
private:
	int x;


};
 
class TestPair : public Test {
public:
	TestPair() : Test(0) {} // передать в базлвый класс конструктору что бы создать обьект
							// обьект создается сначало кусочек р базового класса потом дочернего
							// по этому надо констуктору базового класса передать хоть что нибудь, конструкторы наследовать нельзя 


	TestPair(int x, int y) :Test(x), y(y) {}
	void setY(int y) {	this->y = y;}
	int getY(void) { return y; }
private:
	int y;
};

int main(int argc, char** argv) {

	//TestPair pair;

	//pair.setX(101);

	//std::cout << pair.getX() << std::endl;
	TestPair pair(1, -1);
	std::cout << pair.getX() << " " << pair.getY() << std::endl;

	return 0;

}