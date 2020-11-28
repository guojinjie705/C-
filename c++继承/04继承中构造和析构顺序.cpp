#include<iostream>
using namespace std;
//继承中的构造和析构顺序
class Base{

public:
	Base(){
cout << "Base构造函数" << endl;
	}
	~Base(){
		cout <<"Base析构函数" << endl;
	}
};

class Son:pubic Base{
	public:
	Son(){
cout << "SON构造函数" << endl;
	}
	~Son(){
		cout <<"SON析构函数" << endl;
	}
};

void test(){
		// 

	//继承中的构造和析构顺序如下：
	//先构造父类，再构造子类，析构的顺序与构造的顺序相反

		Son s;

}



int main(){
	test();
}