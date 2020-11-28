#include<iostream>
#include<fstream>
#include<string>

void test01(){
//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件  并且判断是否打开成功
	ifs.open("test.txt",ios::in);

	if(!ifs.is_open()){

		cout<<"文件打开失败" <<endl;
		return;
	}
	//4.读数据
//方法一

	char buf[1024]  = {0};
	while(ifs >> buf){

		cout << buf <<endl;

	}

//方法二
	char buf[1024]  = {0};
	while(ifs.getline(buf,sizeof(buf))){

		cout << buf <<endl;
	}
//方法三
	string buf;
	while(getline(ifs,buf)){  //全局函数

	cout << buf <<endl;
	}

//方法四
	char c;
while((c =ifs.get()) != EOF){  //EOF end of file
	cout <<c; 
}

	//5.关闭文件
	ifs.close();
}


int main(){
	test01();
}

/*
总结：

读文件可以利用 ifstream ，或者fstream类
利用is_open函数可以判断文件是否打开成功
close 关闭文件
*/