#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
//sort
void myPrint(int val){
	cout << val << " ";

}
void test01(){
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//利用sort排序 默认升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(),myPrint);
	cout << endl;

	//改变为降序
	sort(v.begin(), v.end(),greater<int>());  //functional头文件
	for_each(v.begin(), v.end(),myPrint);
	cout << endl; 

}

int main(){
	test01();
}