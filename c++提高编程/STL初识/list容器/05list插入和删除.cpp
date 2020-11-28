#include<iostream>
using namespace std;
#include<list>

//list插入和删除
/**
push_back(elem);//在容器尾部加入一个元素
pop_back();//删除容器中最后一个元素
push_front(elem);//在容器开头插入一个元素
pop_front();//从容器开头移除第一个元素
insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
remove(elem);//删除容器中所有与elem值匹配的元素。
*/

//list容器赋值和交换
void printList(const list<int> &L){
	for (std::list<int>::const_iterator i =L.begin(); i !=L.end(); i++)
	{
		cout<< *i <<" ";
		
	}
	cout << endl;

}
void test01(){
	list<int> L;

	//尾插
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	//头插
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	//尾删
	L.pop_back();

	//头shan
	L.pop_front();

	//insert 插入
	list<int>::iterator it = L.begin();
	L.insert(++it,7777);
	printList(L);

	//删除
	it = L.begin();
	L.erase(++it);
	printList(L);

	//移除
	L.push_back(1000);
	L.push_back(1000);
	L.push_back(1000);
	printList(L);
	L.remove(1000);
	printList(L);

	//清空
	L.clear();
	printList(L);

}

int main(){
	test01();
}