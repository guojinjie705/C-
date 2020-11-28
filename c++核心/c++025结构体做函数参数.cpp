#include<iostream>
#include<string>
using namespace std;
/*
结构体做函数参数
将一个学生传入到一个参数中，打印学生的所有信息
总结：如果不想修改主函数中的数据，用值传递，反之用地址传递
*/


//1.定义学生结构体
struct Student{
	string name;
	int age;
	int score;
};
//打印函数

//1.值传递
void printStudent1(struct Student s){
	s.age = 100;
	cout << "子函数1中打印：" << "\n" <<"姓名：" << s.name 
				<< " 年龄：" << s.age <<" 分数："  << s.score << endl;

}

//2.地址传递
void printStudent2(struct Student *p){
	p->age = 200;
	cout << "子函数2中打印：" << "\n" <<"姓名：" << p->name 
				<< " 年龄：" << p->age <<" 分数："  << p->score << endl;
}
int main(){
	//创建结构体变量
	struct Student s = {"花无缺",25,100};

	printStudent1(s);// 值传递

	printStudent2(&s);  //地址传递

	cout << "main函数中打印：" << "\n" <<"姓名：" << s.name 
				<< " 年龄：" << s.age <<" 分数："  << s.score << endl;
}