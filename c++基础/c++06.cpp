#include<iostream>
using namespace std;
//水仙花数
/*
1.所有三位数：100~999
2.获取个位   a%10
获取十位     a/10%10
获取百位     a/100
注意：两个整数相除的结果依旧是整数
3.判断*/
int main(){
	//1.打印所有数字
	int num = 100;

	do{
		//2.获取水仙花数
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num /10 % 10;
		c = num / 100;
		if(a*a*a+b*b*b+c*c*c==num)
		{
			std::cout << num << std::endl;
		}
		
		num ++;
	}while(num < 1000);

}