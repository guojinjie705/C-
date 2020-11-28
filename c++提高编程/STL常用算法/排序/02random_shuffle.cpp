#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

//random_shuffle

void myPrint(int val){
	cout << val << " ";
}
void test01(){
	srand((unsigned int)time(NULL)); //随机数种子
	 //加入时间后能使每次打乱的更真实，得到不一样的结果

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//利用洗牌算法打乱顺序
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(),myPrint);
}

int main(){

	test01();
}

/*
5.3.2 random_shuffle
功能描述：
洗牌 指定范围内的元素随机调整次序

函数原型：

random_shuffle(iterator beg, iterator end);

// 指定范围内的元素随机调整次序

// beg 开始迭代器

// end 结束迭代器

**总结：**random_shuffle洗牌算法比较实用，使用时记得加随机数种子
*/