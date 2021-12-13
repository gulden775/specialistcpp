#include <iostream>


template <typename T>
class Storage {
public:
	Storage(T data) : data(data) {}
	T getData(void) const;// { return data; } // что бы это работало нужен конструктор копирования осмысленный 
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

template <typename T>						//шаблонные классы пишутся всегда в одном файле параметраризованные методв нельзя писать в другом классе
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


// compareTo(const Storage &rv) const{ return data.compareTo(rv.data);} современный языки программирования
///ранжирующие методы возвращают положительное если первая больше второго отрицательное если второе больше 1 и 0 если равны