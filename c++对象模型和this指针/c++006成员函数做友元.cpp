#include<iostream>
using namespace std;
#include<string>
class Building;
class GoodGay{
public:
	GoodGay();

	void visit();    //让visit函数可以访问building中的私有成员
	void visit2();		 //让visit函数不可以访问building中的私有成员

	Building * building;
};

class Building{
	//告诉编译器 goodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员 

	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};


//类外实现成员函数
Building::Building(){
	m_SittingRoom = "客厅";
	m_BedRoom = "炮友卧室";
}
GoodGay::GoodGay(){
	building = new Building;
}

void GoodGay::visit(){
	cout<< "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout<< "visit函数正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2(){
	cout<< "visit2函数正在访问：" << building->m_SittingRoom << endl;
	cout<< "visit2函数正在访问：" << building->m_BedRoom << endl;
}

void test(){
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main(){
	test();
}