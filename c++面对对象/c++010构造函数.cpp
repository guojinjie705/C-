#include<iostream>
using namespace std;
//析构函数分类与调用

//分类
	//按参数分类：无参构造(默认构造)  和  有参构造
	//按类型分类： 普通构造   拷贝构造函数
class Person{
public:
	Person(){
		cout<<"Person的无参构造函数" << endl;
	}
	Person(int a){
		age = a;
		cout<<"Person的有参构造函数" << endl;
	}
	//拷贝构造函数  --克隆参数对象所具有的属性
	Person(const Person &p){
		//将传入的人身上的所有属性，拷贝到我身上
		cout<<"Person的拷贝构造函数" << endl;
		age = p.age;
	}
	~Person(){
		cout <<"person析构函数的调用" <<endl;
	}
	int age;
};

//调用
void test01(){
	//1.括号法
	Person p; //默认构造函数调用
	Person p2(10);  //有参构造函数调用
	Person p3(p2);  //拷贝构造函数

	cout<<"p2的年龄=" << p2.age << endl;
	cout<<"p3的年龄=" << p3.age << endl;

//注意事项1
	//调用默认构造函数时，不要加（）
	//因为编译器会认为是一个函数的声明,不会认为在创建对象
	// Person p1();



	//2.显示法
	Person p1;
	Person p2 = Person(10);  //有参构造
	Person p3 = Person(p2);  //拷贝构造

	//Person(10);  //匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名函数

//注意事项2
	//不要利用拷贝构造函数，初始匿名对象  编译器会认为是对象声明Person(p3) == person p3;
	// Person(p3);


	//3.隐式转换法
	Person p4 = 10;  //相当于有参构造
	Person p5 = p4;  //拷贝构造
}
int main(){
	test01();


}