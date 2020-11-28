#include<iostream>
#include<string>
#include<ctime>
#include <stdio.h>
#include<cstdlib>
using namespace std;

//学生的结构体
struct Student{
	string sName;
	int score;
};
//老师的结构体
struct Teacher{
	string tName;
	struct Student sArray[5];
};
//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[],int len){
	//给老师赋值
	string nameSeed = "ABCDEF";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		//给学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40; //40 ~ 100
			tArray[i].sArray[j].score = random;
		}
	}

	//要取得[a，b)的值可以用：（rand（）%（b-a））+   a；
	//（当a为0时，可以用rand（）%   b）

}

void printInfo(struct Teacher tArray[],int len){
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName
			<< " 考试分数：" << tArray[i].sArray[j].score << endl;

		}
	}
}
int main(){
	//随机数种子
	//srand是随机数发生器的初始化函数,常常使用系统时间来初始化，也就引入了time（NULL）
	srand((unsigned int)time(NULL));  //随机数种子   在C++中：两个函数都位与<cstdlib>
//1.创建3名老师的数组
	struct Teacher tArray[3];
//2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray,len);
//3.打印所有信息
	printInfo(tArray,len);

}


/*
案例描述：

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。
*/

/*
函数的参数：（unsigned   int）time（0）
从优先级的角度看，这些都是单目运算符，
单目运算符的处理顺序是从右往左的，所以上面的处理过程是：对于time函数，给了一个参数为0的值，返回一个当前系统时间的秒数，然后在将其强转为unsigned  int类型
还有如同（*p++）：这个也是单目运算符，处理也是从右往左的
*/