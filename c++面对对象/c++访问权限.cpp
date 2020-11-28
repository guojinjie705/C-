#include<iostream>
using namespace std;
#include<string>
//访问权限
//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问   子类可以访问父类中的保护内容
//私有权限  private    类内可以访问  类外不可以访问	   子类不可以访问父类中的私有内容

class Person{
	
public:
	string m_Name;

protected:
	string m_Car;

private:
	int m_Password; 

public:
	void func(){
		m_Name = "宋小宝";
		m_Car = "保时捷";
		m_Password = 123456;
	}
};

int main(){

//实例化具体对象
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "本田";    ///保护权限类外访问不到
	//p1.m_Password =222;		///私有权限类外访问不到

}