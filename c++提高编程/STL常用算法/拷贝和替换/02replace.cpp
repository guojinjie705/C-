#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

//replace
class MyPrint{
public:
	bool operator()(int val){
		cout << val << " ";
	}
};
void test02(){
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(),MyPrint());
	cout << endl;

	cout << "替换后：" << endl;
	replace(v.begin(), v.end(),20,2000);
	for_each(v.begin(), v.end(),MyPrint());
	cout << endl;
}

int main(){
	test02();
}
