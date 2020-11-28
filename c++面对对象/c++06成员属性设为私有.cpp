#include<iostream>
using namespace std;
#include<string>
//成员属性设置为私有
//1.可以控制读写的权限
//2.可以检测数据的有效性
class Person{
public:
	//设置姓名
	void setName(string name){
		m_Name = name;
	}
	//获取姓名
	string getName(){
		return m_Name;
	}

	//获取年龄     可读可写 年龄的范围必须在0-100之间
	int getAge(){
		//m_Age = 0;   //初始化
		return m_Age;
	}

	void setAge(int age){
		//检测数据的有效性
		if(age < 0 || age > 150){
			m_Age = 0;
			cout<<"你这个老妖精！！" << endl;
			return;
		}
		m_Age =age;
	}
	//设置情人
	void setLover(string lover){
		m_Lover = lover;

	}
private:
	string m_Name;   //姓名  可读可写
	int m_Age;	    //只读
	string m_Lover;   //只写

};

int main(){
	Person p;
	p.setName("小妞妞");
	cout <<"姓名为："<<p.getName() <<endl;

	p.setAge(10);
	p.getAge();
	p.setLover("苍进空");



}