#include <iostream>

class Test{
	public:      //default constructor
	Test(void):Test(0){
	}
   Test(int x):x(x){		//full constructor


	  // this->x = x;
   }

int getX(void){
	return x;
}

~Test(void){

std::cout << "destructor" << std::endl;
}

	private:
	int x;	
};

int main(int argc, char** argv){

	Test t1; //Test *t1 = new Test();    //by pointer
	std::cout << t1.getX() << std::endl;

	Test t2(10);
	std::cout << t2.getX() << std::endl;

	Test t3=t2;
	std::cout << t3.getX() << std::endl;

	std::cout << "end of main"<< std::endl;
return 0;
}
