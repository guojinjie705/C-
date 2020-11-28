#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>   //标准算法的头文件
//deque容器排序
//sort(iterator beg, iterator end) //对beg和end区间内元素进行排序
//总结：sort算法非常实用，使用时包含头文件 algorithm即可
void printDeque(const deque<int> &d){
	for (std::deque<int>::const_iterator i = d.begin(); i !=d.end(); i++)
	{
		cout << *i << " ";
	}
	cout<< endl;
}
void test01(){
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque(d);

	//排序  默认升序
	//对于支持随机访问的迭代器的容器，都可以利用sort直接进行排序
	//vector也可以
	sort(d.begin(), d.end());
	cout << "排序后："  << endl;
	printDeque(d);




}

int main(){
	test01();
}