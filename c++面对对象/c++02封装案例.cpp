#include<iostream>
using namespace std;
#include<string>
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

//类中的属性和行为 统一称为 成员
//属性————成员属性、成员变量
//行为————成员函数、成员方法
class Student{
	public:
		string m_name;
		int m_id;
		//行为

		void showStudent(){
			cout <<"姓名：" << m_name <<"学号：" << m_id << endl;
		}
//给姓名赋值
		void setName(string name){
			m_name = name;
		}
//给学号赋值
		void setId(int id){
			m_id = id;
		}


};

int main(){
	Student s1;

	// s1.m_name = "张三";
	// s1.m_id = 10001;
	s1.setName("江湖程序员")；
	s1.setId(100002);
	s1.showStudent();
}




