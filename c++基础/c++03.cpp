#include<isostream>
#include<string> //string的要加上
using namespace std;

int main(){
//整形
	int a = 0;
	cout << "请给整数a赋值：" << endl;
	cin >> a;
	cout << "a的值为" << a << endl;

//浮点型

	float f = 3.14f;
	cout << "请给浮点型f赋值：" << endl;
	cin >> f;
	cout << "变量f = " << f << endl;

//字符型
	char ch = 'a'
	cout << "请给变量ch赋值：" << endl;
	cin >> ch;
	cout << "result: ch = " << ch << endl;

//字符串型
	string str = "hello";
	cout << "请给字符串str赋值：" << endl;
	cin >> str ;
	cout << "str = " << str << endl;

//布尔类型
	bool flag = false;
	cout << "请给变量flag赋值：" << endl;
	cin >> flag;   //bool类型只要非0的值都代表真
	cout << "flag = " << flag << endl;

	string name;
	cout << "请输入您的姓名：" << endl;
	cin >> name;
	cout << "您的姓名是" << name << endl;

}