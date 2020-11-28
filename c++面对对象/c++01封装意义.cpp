#include<iostream>
using namespace std;
//1、封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物


//设计一个圆类，求圆 的周长
//公式：2*PI*半径
const double PI = 3.1415;

//class代表设计一个类，类后面紧跟类名
class Circle{
	//访问权限
		//公共权限
public:
	//属性
		//半径
	int m_r;

	//行为
		//获取圆的周长
	double calculateZC(){
		return 2*PI*m_r;
	}
		//获取圆的面积
	double getSquare(){
		return PI*m_r*m_r;
	}
}; //注意语法,有；


int main(){
	//实例化 ————通过一个类创建一个对象的过程
	//通过圆类 创建具体的圆（对象）
	Circle c1;
	//给属性赋值
	c1.m_r  = 0;
	cout << "请输入圆的半径：" ;
	cin >> c1.m_r;
	cout <<"圆的半径= " << c1.m_r << endl;

	cout<< "圆的周长为："  << c1.calculateZC() << endl;
	cout<< "圆的面积为："  << c1.getSquare()  << endl;
}