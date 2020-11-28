#include<isostream>
using namespace std;

int main(){
	/* 三只小猪称体重
有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？*/
//创建体重变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
//用户输入
	cout << "请输入小猪A的体重：" << endl;
	cin >> num1;

	cout << "请输入小猪B的体重：" << endl;
	cin >> num2;

	cout << "请输入小猪C的体重：" << endl;
	cin >> num3;

	cout <<　"小猪A的体重为：" << num1 << endl;
	cout <<　"小猪B的体重为：" << num2 << endl;
	cout <<　"小猪C的体重为：" << num3 << endl;

//判断
//先判断	A和B
	if(num1 > num2){  //a>b
		if(num1 > num3){
			cout << "小猪A最重" << endl;
		}
		else{
			cout << "小猪C最终" << endl;
		}

	}
	else{  //a<b
		if(num2 > num3){
			cout << "小猪B最重" << endl;
		}
		else{
			cout << "小猪C最终" << endl;
		}
	}


	}




}
