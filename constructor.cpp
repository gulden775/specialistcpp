#include <iostream>

class Test{
	public:
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

	Test t1(1);
	std::cout << t1.getX() << std::endl;
return 0;
}
