#include<iostream>
#include<string>
using namespace std;
//类做友元
class Building;
class GoodGay{
public:
	GoodGay();
	void visit();  //参观函数，访问building中的属性
	Building * building;
};

class Building{
	//goodgay是本类的好朋友，可以访问本类中的私有成员----核心
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//类外写成员函数
Building::Building(){
	m_SittingRoom = "客厅";
	m_BedRoom = "炮友卧室";
}

GoodGay::GoodGay(){
	//创建一个建筑物的对象
	building = new Building;

}
void GoodGay::visit(){
	cout << "好基友正在访问" << building->m_SittingRoom << endl;
		cout << "好基友正在访问" << building->m_BedRoom << endl; //报错



}


void test(){
	GoodGay gg;
	gg.visit();
}

int main(){
	test();

}