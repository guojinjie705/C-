#include<iostream>
using namespace std;
//const的使用情景
struct Student{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来

void printStudents(const student *s){
	//加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作
	//s->age = 150;  
	cout <<"姓名：" << s.name 
		<< " 年龄：" << s.age <<" 分数："  << s.score << endl;
}

int main(){
	//创建结构体变量
	struct Student s = {"张三",15,70};
	//通过函数打印
	printStudents(&s);

	cout << "main函数中 age=" << s.age <<endl;
}