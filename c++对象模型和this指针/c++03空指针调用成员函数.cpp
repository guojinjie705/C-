#include<iostream>
using namespace std;
//空指针调用成员函数
class Person{
	public:
		void showClassName(){
			cout << "this is Person class" << endl;
		}
		void showPersonAge(){
			//解决报错方法
			if (this==NULL)
			{
				return;
			}
			//报错原因是因为传入的指针为NULL
			cout << "age = " << m_Age << endl;  //编译器为this->m_Age
		}
		int m_Age;
};

void test01(){
	Person * p = NULL;

	p->showClassName();  //空指针，可以调用成员函数

	p->showPersonAge(); //报错  //但是如果成员函数中用到了this指针，就不可以了
}

int main(){
	test01();

}