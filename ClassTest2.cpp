#include <iostream>

class Test {

	public:


	private:
		int x;
};

int main(int argc, char** argv){

	Test t1;
	t1.x = 101;
	std::cout << t1.x << std::endl;
	
	Test *t2 = new Test();
	t2->x =202;
	std::cout << t2->x << std::endl;
	delete t2;

	return 0;
}
