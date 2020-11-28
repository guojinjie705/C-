#include<iostream>
using namespace std;
#include<string>
//1.定义学生数据类型
//语法：  struct 类型名称 { 成员列表 }
struct Student{
	string name;
	int age;
	int score;
}stu3;//定义结构体时顺便创建变量

//2.通过学生类型创建具体学生


int main(){
	//1.struct 结构体名 变量名
	//实例化时struct关键字可以省略
	struct Student s1;
	s1.name = "张三"; //给s1属性赋值
	s1.age = 10;
	s1.score = 100;
	cout << "姓名：" << s1.name << endl;
	cout << "年龄：" << s1.age<< endl;
	cout << "分数：" << s1.score<< endl;


	//2.struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
	struct Student stu2 = {"李四",20,80};
	cout << "我叫"<<stu2.name << ",今年" << stu2.age <<"岁,这次考试取得" << stu2.score <<"分。" <<endl; 



	// 3.定义结构体时顺便创建变量
	stu3.name = "小鱼";
	stu3.age = 14;
	stu3.score = 99;
	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age  << " 分数：" << stu3.score << endl;

	return 0;
}

/*
通过结构体创建变量的方式有三种：

1.struct 结构体名 变量名
2.struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
3.定义结构体时顺便创建变量
*/