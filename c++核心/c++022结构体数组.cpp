#include<iostream>
using namespace std;
#include<string>
//结构体数组
/*
作用：**将自定义的结构体放入到数组中方便维护
语法： struct 结构体名 数组名[元素个数] = { {} , {} , ... {} }
*/
//1.定义结构体
struct Student{
	string name;
	int age;
	int score;
};
int main(){
//2.创建结构体数组
	struct Student stuArray[3] = {
		{"张三",18,100},{"李艾",20,88},{"王航",17,90}
	};

//3.给结构体数组中的元素赋值
	stuArray[2].name = "何炅";
	stuArray[2].age = 50;
	stuArray[2].score = 80;
//4.遍历结构体数组
for (int i = 0; i < 3;i ++)
 {
 	cout <<"姓名："<< stuArray[i].name << "\t"
 		<<"年龄：" << stuArray[i].age  << "\t"
 		<<"分数：" << stuArray[i].score << endl;
 } 
 
}