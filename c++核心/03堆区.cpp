#include<iostream>
using namespace std;
/*总结：

堆区数据由程序员管理开辟和释放

堆区数据利用new关键字进行开辟内存
*/
int * func(){

	//利用new 关键字  可以将数据开辟到堆区
//指针  本质上也是局部变量，放在栈上，指针保存的数据是放在堆区
	int * p = new int(10);  //返回地址编号
	return p;  
}
int main(){
	//在堆区开辟数据

	int * p = func();
	cout << *p << endl;
}