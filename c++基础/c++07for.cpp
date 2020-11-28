#include<iostream>
using namespace std;

int main(){
	// for(int i =1; i <= 100; i ++){

	// 	if(i%7==0||i/10==7||i%10==7){
	// 		std::cout << "敲桌子！！！" << "\t" << i <<std::endl;
	// 	}else{
	// 		std::cout << i << std::endl;
	// 	}

	// }

	for(int i =1; i <= 9; i++){
		for(int j =1; j <=i; j ++){
			std::cout << i <<"*" << j << "=" <<i*j <<"\t";

		}
		std::cout << endl;
	}



}