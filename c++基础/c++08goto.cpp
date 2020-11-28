#include<iostream>
using namespace std;

int main(){
//如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
	std::cout << "1.xxx" << std::endl;
	std::cout << "2.xxx" << std::endl;
	goto FLAG;
	std::cout << "3.xxx" << std::endl;
	std::cout << "4.xxx" << std::endl;
	FLAG:
 	std::cout << "5.xxx" << std::endl;




}