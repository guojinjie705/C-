#include<isostream>
using namespace std;

int main(){

	int a  = 10;
	int b = 3;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;  //两个整数相除的结果依然是整数
	//在除法运算中，除数不能为0
	//只有整型变量可以进行取模运算,浮点数不可以

	cout << a % b << endl;











	system('pause')
	return 0;
}