#include<iostream>
using namespace std;
#include<string>

class Cube{
public:
	//设置长//获取长
	void setLength(int L){
		m_L = L;
	}
	int getLength(){
		return m_L;
	}

	//设置宽//获取宽
	void setWidth(int W){
		m_W = W;
	}
	int getWidth(){
		return m_W;
	}
	//设置高//获取高
	void setHeight(int H){
		m_H = H;
	}
	int getHeight(){
		return m_H;
	}
	//获取面积
	int getSquare(){
		return 2*m_L*m_W+2*m_L*m_H+2*m_H*m_W;
	}
	//获取体积
	int getVolume(){
		return m_L*m_W*m_H;
	}

	//利用成员函数判断 ,只传一个参数
	bool isSameByClass(Cube &c){
		if(m_L==c.getLength() && m_W==c.getWidth() && m_H==c.getHeight()){
			return true;
		}
		return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;
};
//利用全局函数判断两个立方体是否相等，传入两个
bool isSame(Cube &c1,Cube &c2){
	if(c1.getLength()==c2.getLength() && c1.getWidth()==c2.getWidth() && c1.getHeight()==c2.getHeight()){
		return true;
	}
	return false;
}

int main(){
	Cube c1;
	c1.setLength( 10);
	c1.setWidth(10);
	c1.setHeight(10);
	cout <<"c1的面积="<<c1.getSquare() <<endl;
	cout<<"c1的体积=" << c1.getVolume() << endl;

	Cube c2;
	c2.setLength( 10);
	c2.setWidth(10);
	c2.setHeight(10);

	bool ret = isSame(c1,c2);
	if(ret){
		cout<<"c1和c2相等" <<endl;
	}
	else{
		cout<<"c1和c2不相等" <<endl;
	}
//利用成员函数判断
	ret = c1.isSameByClass(c2);
	if(ret){
		cout<<"成员函数判断->c1和c2相等" <<endl;
	}
	else{
		cout<<"成员函数判断->c1和c2不相等" <<endl;
	}

}