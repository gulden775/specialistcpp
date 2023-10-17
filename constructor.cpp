#include <iostream>

class Test{
	public:
	Test(void){
	}
   Test(int x){
	   this->x = x;
   }

int getX(void){
	return x;
}
	private:
	int x;	


};

int main(int argc, char** argv){

	Test t1; //Test *t1 = new Test();
	std::cout << t1.getX() << std::endl;

	Test t2(10);
	std::cout << t2.getX() << std::endl;


return 0;
}
