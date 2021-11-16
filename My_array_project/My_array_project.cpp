#include<iostream>
#include<string>
#ifndef ARRAY_SIZE                    //условная компиляция
#define ARRAY_SIZE 10
#endif // !ARRAY_SIZE



using namespace std;
class Array {
public:
	Array(void);			//умолчания
	Array(int);				// задать масив указав длину
	Array(const int*, int);	// полный конструктор
	Array(const Array&);


	int size(void) {return n;}

	friend void print(const Array&);  //дружественная функция не обязана иметь реализацию

	~Array();

private:	
	int *m;
	int n;
	void init(const int*,int); //

};// Array


Array::Array(void) {			//конструктор умолчания
	init(NULL, ARRAY_SIZE);

}

Array::Array(int n) {
	if (n < 1) n = ARRAY_SIZE;//!!!!
	init(NULL,n);
}

Array::Array(const int* m, int n) {

	if (n < 1) n = ARRAY_SIZE;//!!!!
	init(m, n);
}

Array::Array(const Array& obj) {
	init(obj.m, obj.n);
	
}


Array::~Array() {

	delete[]m;

}


void Array::init(const int* m, int n) {

	this->m = new int[n];     // получаем m 
	this->n = n;

	if (m == NULL)
		for (int i = 0; i < n; i++) this->m[i] = 0; //заполнить масив нулями если массив не передали
	else
		for (int i = 0; i < n; i++) this->m[i] = m[i]; // заполнить если передали

}
void print(const Array &ar) {
	if (ar.n == 0) {
		cout << "[empty]" << endl;
		return;
	}
	cout << "[" <<ar.m[0];
	for (int i = 1; i < ar.n; i++) cout << ", " <<ar.m[i];
	cout << "]" << endl;

}
int main(int argc, char** argv) {


	Array a1;
	cout << "size = " << a1.size() << " ";
	print(a1);
	
	Array a2(5);
	cout << "size = " << a2.size() << " ";
	print(a2);

	int m[] = { 1,2,3,4,5};
	Array a3(m, 5);
	cout << "size = " << a3.size() << " ";
	print(a3);



	return 0;
}