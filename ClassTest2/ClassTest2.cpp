
#include <iostream>

class Test {
public:
    Test(void) : Test(0) {  // передать управление другому конструктору только с 2011г. 
    }
    Test(int x) : x(x) { //иницилизация х, вместо присвоения
        //this->x = x;
    }

    int getX(void) const {return x;}
    const Test operator+(const Test& rv) const {
        return *(new Test(x + rv.x));
    }
    const Test operator = (const Test& rv) {
        x = rv.x;
        return *this;
    }

    //int getX(void) {
    //    return x;
    //}
   /* void setX(int x) {
        if (x < 0) x = -x;
        this->x = x;
    }
    */
 private:
    int x;
};

int main(int argc, char** argv)
{
    Test t1;
    std::cout << t1.getX() <<std::endl;

    Test t2(10);
    std::cout << t2.getX() << std::endl;

    Test t3 = t2;
    std::cout << t3.getX() << std::endl;
    /*Test t1;
    t1.setX(-100);
    std::cout << t1.getX() << std::endl;

    Test* t2 = new Test();
    t2->setX(202);
    std::cout << t2->getX() << std::endl;*/
    return 0;
}

