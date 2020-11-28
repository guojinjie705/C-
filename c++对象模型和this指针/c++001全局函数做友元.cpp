#include<iostream>
#include<string>
using namespace std;

class Building{
//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容 
friend void googGuy(Building *building);


public:
	Building(){
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;

private:
	string m_BedRoom;

};

//全局函数
void googGuy(Building *building){
	cout<<"好基友的全局函数正在访问：" <<building->m_SittingRoom << endl;
	cout<<"好基友的全局函数正在访问：" <<building->m_BedRoom << endl;
}

void test01(){
	Building b;
	googGuy(&b);
}
int main(){
	test01();
}






/*
在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术

友元的目的就是让一个函数或者类 访问另一个类中私有成员

友元的关键字为friend

友元的三种实现

1.全局函数做友元
2.类做友元
3.成员函数做友元
*/














































































































































































#include<iostream>
uaing namespace std;


int mian(){



}