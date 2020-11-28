#include<io>
using namespae std;

//继承实现页面
class BasePage{
public:

	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
};
//继承的好处：减少重复的代码
//语法： class 子类：继承方式 父类
//
//JAVA页面
class Java:public BasePage{
public:
	void content(){
		cout<<"java学科视频" <<endl;
	}
}

void test(){
	//Java页面
	cout << "Java下载视频页面如下： " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;
}

int main(){
	test();
	

}