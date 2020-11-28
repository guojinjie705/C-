#include<iostream>
using namespace std;
#include<deque>
//deque数据存取
/*
at(int idx); //返回索引idx所指的数据
operator[]; //返回索引idx所指的数据
front(); //返回容器中第一个数据元素
back(); //返回容器中最后一个数据元素
*/
void test01(){
deque<int> d;
d.push_back(1);
d.push_back(2);
d.push_back(3);
d.push_front(10);
d.push_front(20);
d.push_front(30);

//通过[]访问元素
for (int i = 0; i < d.size(); i++)
{
	cout << d[i] << " ";
}
cout << endl;

//通过at方式访问
for (int i = 0; i <d.size(); i++)
{
	cout << d.at(i) << " ";
}
cout << endl;


cout << "front:" << d.front() << endl;
cout << "back:"  << d.back() << endl;

}

int main(){
	test01();
}

