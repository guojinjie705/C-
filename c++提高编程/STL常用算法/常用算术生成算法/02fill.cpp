#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>


//fill

void myPrint(int val){
	cout <<val << " ";
}
void test01(){
	std::vector<int> v;
	v.resize(10);

	//后期重新填充
	fill(v.begin(), v.end(),100);
	for_each(v.begin(), v.end(),myPrint);
}

int main(){
	test01();
}