#include<iostream>
using namespace std;
//占位参数
//返回值类型 函数名(数据类型){}
//目前阶段暂时用不到
//占位参数可以有默认参数  int = 10
void func(int a,int){
	cout << "this is a func" <<endl;

}
int main(){
	func(10,10);  //占位参数必须填补
}