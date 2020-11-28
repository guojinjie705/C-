#include<iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>
#include <ctime>
#include <cstdlib>  //rand()头文件

/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/
#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker{
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker> &v){
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand()%10000 + 10000;  //10000~19999
		//将员工放入到容器中
		v.push_back(worker);
	}

}
//员工分组
void setGroup(std::vector<Worker> &v,multimap<int,Worker> &m){
	for (std::vector<Worker>::iterator i = v.begin(); i != v.end(); i++)
	{
		//产生随机部门编号
		int deptId = rand() % 3; //0 1 2 
		//将员工插入放到分组中
		//key部门编号，value具体员工
		m.insert(make_pair(deptId,*i));
	}

}

void showWorkerByGroup(multimap<int,Worker> &m){
	 cout << "策划部门：" << endl;
	 multimap<int,Worker>::iterator pos = m.find(CEHUA);
	 int count = m.count(CEHUA);
	 int index = 0;
	 for (; pos != m.end() && index < count; pos++)
	 {
	 	cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	 }
	 cout <<"--------------------------" << endl;
	 cout << "美术部门：" << endl;
	      vpos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	 for (; pos != m.end() && index < count; pos++)
	 {
	 	cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	 }
	 cout <<"--------------------------" << endl;

	 cout << "研发部门：" << endl;
	 pos = m.find(YANFA);
	count = m.count(YANFA);
	 index = 0;
	 for (; pos != m.end() && index < count; pos++)
	 {
	 	cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	 }
	 cout <<"--------------------------" << endl;
}
void test(){
	//1.创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);

	//员工分组
	multimap<int,Worker> mWorker;
	setGroup(vWorker,mWorker);

	//测试
	for (std::vector<Worker>::iterator i = vWorker.begin(); i != vWorker.end(); i++)
	{
		cout << "姓名：" << i->m_Name <<" 工资：" << i->m_Salary << endl;
	}
	cout << endl;

}

int main(){
	srand((unsigned int)time(NULL));
	test();
}