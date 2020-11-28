#include<iostream>
#include<string>
using namespace std;
/*结构体嵌套
作用： 结构体中的成员可以是另一个结构体
例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
*/
//定义结构体
struct Student{
	string name;
	int age;
	int score;
};
struct Teacher{
	int id;
	string name;
	int age;
	struct Student stu;  //子结构体，辅导的学生，先于老师定义
};
int main(){
	//创建老师
	Teacher t;
	t.id = 1000011;
	t.name = "老九";
	t.age = 50;
	t.stu.name = "小丽";
	t.stu.age = 18;
	t.stu.score = 100;

	cout << "教师职工编号： " << t.id << " 姓名： " << t.name << " 年龄： " << t.age << endl;
	
	cout << "辅导学员 姓名： " << t.stu.name << " 年龄：" << t.stu.age << " 考试分数： " << t.stu.score << endl;

}